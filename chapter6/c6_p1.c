//
// Created by latham on 17-8-22.
//
#include "../initial.h"
char* find_char(char const *source,char const *chars);

void
c6_p1(){
    char *source = "abc";
    char *chars = "c";
    char* res = find_char(source,chars);
    printf("%c\n",*res);
}

char* find_char(char const *source,char const *chars){

    char target;
    char ch;
    char * s;
    if(source!=NULL && chars!=NULL){
    while( (ch = *chars) != '\0' ){
        s = source;
        while( (target=*s) != '\0' ){
            if(ch == target){
                return s;
            }
            s++;
        }
        chars++;
    }
    }
}