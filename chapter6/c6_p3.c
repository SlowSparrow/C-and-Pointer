//
// Created by latham on 17-8-23.
//

#include "../initial.h"
//void reverse_string(char * string);

void c6_p3(){
    char string[] = "abdc";
    reverse_string(string);
    printf("%s\n",string);
}

void reverse_string(char * string){
    char *p=string;
    char *q=string;
    char ch;
    while(*q++!='\0') ;
    q-=2;
    while( p < q ){
        ch = *q;
        *q-- = *p;
        *p++ = ch;
    }
}