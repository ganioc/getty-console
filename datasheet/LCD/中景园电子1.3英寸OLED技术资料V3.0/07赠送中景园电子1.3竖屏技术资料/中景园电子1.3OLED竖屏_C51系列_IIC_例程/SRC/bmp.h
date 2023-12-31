//////////////////////////////////////////////////////////////////////////////////	 
//本程序只供学习使用，未经作者许可，不得用于其它任何用途
//中景园电子
//店铺地址：http://shop73023976.taobao.com/?spm=2013.1.0.0.M4PqC2
//
//  文 件 名   : main.c
//  版 本 号   : v2.0
//  作    者   : HuangKai
//  生成日期   : 2014-0101
//  最近修改   : 
//  功能描述   : OLED 4接口演示例程(51系列)
//              说明: 
//              ----------------------------------------------------------------
//              GND    电源地
//              VCC  接5V或3.3v电源
//              D0   P1^0（SCL）
//              D1   P1^1（SDA）
//              RES  接P12
//              DC   接P13
//              CS   接P14               
//              ----------------------------------------------------------------
// 修改历史   :
// 日    期   : 
// 作    者   : HuangKai
// 修改内容   : 创建文件
//版权所有，盗版必究。
//Copyright(C) 中景园电子2014/3/16
//All rights reserved
//******************************************************************************/

#ifndef __BMP_H
#define __BMP_H
unsigned char code BMP1[] =
{
	0x06,0x0A,0xFE,0x0A,0xC6,0x00,0xE0,0x00,0xF0,0x00,0xF8,0x00,0x00,0xFE,0x7D,0xBB,
0xC7,0xEF,0xEF,0xEF,0xEF,0xEF,0xEF,0xEF,0xC7,0xBB,0x7D,0xFE,0x00,0x00,0x00,0x00,
0x08,0x0C,0xFE,0xFE,0x0C,0x08,0x20,0x60,0xFE,0xFE,0x60,0x20,0x00,0x00,0x78,0x48,
0xFE,0x82,0xBA,0xBA,0x82,0xBA,0xBA,0x82,0xBA,0xBA,0x82,0xBA,0xBA,0x82,0xFE,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0xE1,0xE1,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0xC0,0xC0,0xC0,0x00,0x00,0x00,0x00,0xE0,0xE0,0x00,0x00,0xC0,0xC0,0xC0,
0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0x40,0x00,0x00,0x00,0x00,
0x00,0x00,0xF0,0xF0,0xF0,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0xFF,0xFF,0xFF,
0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0xF0,0xF0,0xF0,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x03,
0x0F,0x3E,0xF8,0xF0,0xC0,0xE0,0xF0,0x3C,0x1F,0x0F,0x03,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0xFF,0xFF,0xFF,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xFF,0xFF,0xFF,
0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x87,0x87,0x87,0x80,0x80,0x80,0x80,0x87,0x87,0x80,0x80,0xBC,0xFE,0xE6,
0xC6,0x83,0x83,0x83,0x81,0x83,0x83,0x87,0x86,0x8E,0x8E,0x8C,0x1C,0x00,0x00,0x00,
0x00,0x00,0x03,0x03,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x03,0x03,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x3D,0x7D,0x71,0x61,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0xE1,0xF9,0x79,0x19,0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x87,0x87,0x87,
0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x00,0x00,
0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xD9,0xD9,0xD9,0xD9,0xD9,0xD9,0xD9,0xD9,0xD9,
0xD9,0xD9,0xD9,0xD9,0xD9,0xD9,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0xFF,0xFF,
0xFF,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x00,0x00,0x00,
0x18,0x18,0x18,0x18,0x18,0xD8,0xD8,0xD8,0xD8,0xD8,0xD8,0xD8,0xD8,0xDE,0xDE,0xDE,
0xD8,0xD8,0xD8,0xD8,0xD8,0xD8,0xD8,0xD8,0x18,0x18,0x18,0x18,0x18,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0x33,0x33,0x33,0x33,0x33,0x33,0x33,
0x33,0x33,0x33,0x33,0x33,0x33,0x33,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x0F,0x8F,0xC8,0xC8,0xC8,0x08,0x08,0x08,0x08,0xF8,0xF8,
0x08,0x08,0x08,0x08,0xE8,0xC8,0xCF,0x8F,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0x66,0x66,0x66,0x66,0x66,0x66,0x66,
0x66,0x66,0x66,0x66,0x66,0x66,0x66,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x06,0x06,0x07,0x07,0x03,0x01,0x01,0x00,0x00,0x1C,0x1C,0x0C,0x0F,0x0F,
0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x03,0x03,0x07,0x0F,0x00,0x00,0x00,0x00,0x00,
0x00,0x0E,0x0E,0x0E,0x0E,0x0E,0x0F,0x0F,0x0F,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,
0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0F,0x0F,0x0E,0x0E,0x0E,0x0E,0x0E,0x00,0x00,
0x00,0xFE,0xFE,0xFE,0x06,0x06,0x06,0x06,0xC6,0xC6,0xC6,0xC6,0xC6,0xC6,0xC6,0xC6,
0xC6,0xC6,0xC6,0xC6,0xC6,0x06,0x06,0x06,0x06,0xFE,0xFE,0xFE,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0xFE,0xFE,0xC6,0xC6,0xC6,0xC6,0xC6,0xC6,0xC6,0xC6,0xC6,0xC6,
0xC6,0xC6,0xC6,0xC6,0xC6,0xC6,0xC6,0xC6,0xC6,0xFE,0xFE,0x00,0x00,0x00,0x00,0x00,
0x00,0xFF,0xFF,0xFF,0x00,0x18,0x18,0x18,0x18,0x18,0xF8,0xF8,0xF8,0x18,0x18,0x18,
0xF8,0xF8,0x18,0x18,0x18,0x18,0x18,0x00,0x00,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0xFF,0xFF,0x00,0x00,0xC0,0xC0,0xC0,0xC0,0xC0,0xFE,0xFE,0xFE,
0xC0,0xC0,0xC0,0xC0,0xC0,0xFE,0xFE,0xFE,0xC0,0xC0,0xC0,0xC0,0xC0,0x00,0x00,0x00,
0x00,0xFF,0xFF,0xFF,0x00,0x00,0x40,0xE0,0xF0,0x7C,0x3F,0x0F,0x01,0x00,0x00,0x00,
0x7F,0xFF,0xE0,0xE0,0xE0,0xF0,0x78,0x30,0x00,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,
0x00,0x00,0x80,0xF8,0xFF,0x3F,0x00,0x18,0x18,0x18,0x18,0x18,0x18,0xFF,0xFF,0x1F,
0x18,0x18,0x18,0x18,0x18,0xFF,0xFF,0xFF,0x18,0x18,0x18,0x18,0x18,0x18,0x00,0x00,
0x00,0x3F,0x3F,0x3F,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,
0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x3F,0x3F,0x3F,0x00,0x00,0x00,0x00,
0x00,0x0E,0x0F,0x07,0x01,0x00,0x00,0x00,0x00,0x30,0x38,0x1C,0x0F,0x07,0x03,0x00,
0x00,0x00,0x00,0x00,0x00,0x3F,0x3F,0x3F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x48,0x48,0x5C,0x48,0xC8,0x48,0x5C,0x48,0x48,0x00,0x00,0x00,0xF0,0x94,0x98,
0x90,0xF0,0x90,0x98,0x94,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0x20,0x10,
0x10,0x10,0x10,0x20,0xC0,0x00,0x00,0xC0,0x20,0x10,0x10,0x10,0x10,0x20,0xC0,0x00,
0x00,0x24,0x15,0x0E,0x04,0xFF,0x04,0x0E,0x15,0x24,0x00,0x00,0x00,0x17,0x14,0x14,
0x14,0xFF,0x14,0x14,0x14,0x17,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0x20,0x40,
0x40,0x40,0x50,0x20,0x5F,0x80,0x00,0x1F,0x20,0x40,0x40,0x40,0x50,0x20,0x5F,0x80,/*"C:\Users\EVK\Desktop\64x128.bmp",0*/
/* (64 X 128 )*/

};

#endif


