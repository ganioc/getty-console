#include <stdio.h>

int main(int argc, char **argv){
    FILE *in;
    char ch;

    printf("argc is %d\n", argc);

    if(argc < 2){
        printf("Need file name!\n$ remove file\n\n");
        return -1;
    }
    printf("file: %s\n", argv[1]);

    in = fopen(argv[1], "r");

    if(!in){
        printf("Can't open file\n");
        return -1;
    }

    printf("open succeed.\n");

    printf("print out the content\n");

    while( (ch=fgetc(in)) != EOF){
        if( (ch >= 0x40 && ch <= 0x7E) || (ch == 0x0D) || (ch == 0x0A) 
            || (ch >= 0x20 && ch <= 0x3E )){
            printf("%c 0x%02x ", ch, ch);
        }
        //else{
        // printf("\n0x%02X\n", ch);
        //}

    }

    printf("\n");

    fclose(in);
    printf("\nclose file.\n");

    return 0;
}