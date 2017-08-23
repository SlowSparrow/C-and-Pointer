//
// Created by latham on 17-8-21.
//
#include "../initial.h"
void
c5_p2(){
    read2();
}

void
read2(){
    int ch;
    while((ch=getchar())!='#'){
        if( (ch>='a' && ch<='z')){
            ch = encrypt(ch,'a');
        }
        if(ch>='A' && ch<='Z'){
            ch = encrypt(ch,'A');
        }
        putchar(ch);
    }
    printf("\n");
}

int
encrypt(int ch,int base){
    ch -= base;
    ch += 13;
    ch %= 26;
    return ch + base;
}