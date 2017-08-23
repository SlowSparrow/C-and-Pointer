//
// Created by latham on 17-8-21.
//
#include "../initial.h"
void
c5_p1(){
    read();
}


void
read(){
    int ch;
    while((ch=getchar())!='#'){
        if( ch>=65 && ch<=90){
            ch = ch+32;
        }
        putchar(tolower(ch));
    }
    printf("\n");
}