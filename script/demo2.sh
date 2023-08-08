#!/bin/bash

# i2cdetect -y 1

LCD_WIDTH=128
LCD_HEIGHT=64


function send_cmd(){
	i2ctransfer -y 1 w2@0x3C 0x00 $1
}
function send_data(){
	i2ctransfer -y 1 w2@0x3C 0x40 $1
}
function send_data8(){
	i2ctransfer -y 1 w9@0x3C 0x40 $1 $2 $3 $4 $5 $6 $7 $8
}
function init(){
	send_cmd 0xAE # LED off
	send_cmd 0xD5 
	send_cmd 0x80
	send_cmd 0xA8
	send_cmd 0x3F
	send_cmd 0xD3
	send_cmd 0x00

	send_cmd 0x40
	send_cmd 0x8D

	# internal VCC
	send_cmd 0x14
	
	send_cmd 0x20 # Memory Mode
	send_cmd 0x00
	send_cmd 0xA1 # SEGREMAP
	send_cmd 0xC8 # COM SCAN DEC

	send_cmd 0xDA #
	send_cmd 0x12
	send_cmd 0x81 # Contrast
	# internal VCC
	send_cmd 0xCF

	send_cmd 0xD9 # SET Precharge

	# internal VCC
	send_cmd 0xF1 

	send_cmd 0xDB
	send_cmd 0x40

	send_cmd 0xA4
	send_cmd 0xA6
	# Turn ON
	send_cmd 0xAF
}
function init_f103(){
	send_cmd 0xAE # LED off
	send_cmd 0x02 # low column addr
	send_cmd 0x10 # high column addr
	send_cmd 0x40 # set start line addr
	send_cmd 0xB0 # set page address
	send_cmd 0x81 # contract control
	# 128
	send_cmd 0xFF 
	send_cmd 0xA1  # set segment remap, 1
	send_cmd 0xA6  # normal/reverse, normal
	send_cmd 0xA8
	send_cmd 0x3F  # 1/32 duty 
	send_cmd 0xC8  # com scan direction
	send_cmd 0xD3  # set display offset
	send_cmd 0x00

	send_cmd 0xD5  # set osc division
	send_cmd 0x80  

	send_cmd 0xD8  # set area color mode off
	send_cmd 0x05  #

	send_cmd 0xD9  # set pre-charge period
	send_cmd 0xF1  #

	send_cmd 0xDA # set com pin configuration
	send_cmd 0x12 # 

	send_cmd 0xDB # set Vcomh
	send_cmd 0x30

	send_cmd 0x8D # chargepump enable
	send_cmd 0x14 #

	# send_cmd 0xA0 # turn on oled panel,
	send_cmd 0xAF
}
function off_f103(){
	send_cmd 0xAE
}
function clear_f103(){
	for i in $(seq 0xB0 0xB7); do 
		send_cmd $i  # set page addr
		send_cmd 0x00 # column low addr
		send_cmd 0x10 # column high addr
		for n in $(seq 0 16 ); do 
			# send_data8 0 0 0 0 0 0 0 0 
			# send_data 0
			i2ctransfer -y 1 w17@0x3C 0x40 0 0 0 0  0 0 0 0  0 0 0 0  0 0 0 0   
		done 
	done
}
function on_f103(){
	for i in $(seq 0xB0 0xB7); do 
		send_cmd $i  # set page addr
		send_cmd 0x00 # column low addr
		send_cmd 0x10 # column high addr
		for n in $(seq 0 127 ); do 
			send_data 0xFF
		done 
	done
}


# sequence
echo -e "Use i2c-tools to control the i2c LCD SH1106"
echo -e "init"
init

for i in $(seq 0 2 ); do
	echo -e "clear"
	clear_f103

	echo -e "on"
	on_f103
	# sleep 1
done

clear_display



# off_f103
echo -e "--End--"


