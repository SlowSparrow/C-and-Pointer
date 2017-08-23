//
// Created by latham on 17-8-17.
//
#include "../initial.h"

int substr(char dstr[],char src[],int start,int len){

    if( start+len>strlen(src) || start<0 || len<0){
           dstr[0] = NUL;
           return -1;
    }
    int i=0;
    for( i=0;i<len;i++ ){
        dstr[i] = src[start++];
    }
    dstr[i] = NUL;
    return strlen(dstr);
}

void
c4_p6(){
    char src[]="hello";
    char dstr[20];
    int dLen = substr(dstr,src,1,5);
    printf("oldStr=%s\nnewStr=%s\ndLen=%d\n",src,dstr,dLen);
}
