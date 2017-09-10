//
// Created by latham on 17-8-27.
//
#include "../initial.h"

void c9_p15(){
    char src[] = "1231561255555550";
    char dest[100];
    int c = strlen(src);
    dollars(dest,src);
    printf("%s\n",dest);
}

void dollars(char* dest,char const *src){

    int len;

    if( dest==NULL || src==NULL ){
        return;
    }

    *dest++ = '$';
    len = strlen(src);

    if( len >= 3 ){
        int i;

        for( i=len-2;i>0;){
            *dest++ = * src++;
            if( --i > 0 && i%3 == 0 ){
                *dest++ = ',';
            }
        }

    }else{
        *dest++ = '0';
    }

    *dest++ = '.';
    *dest++ = len < 2 ? '0' : *src++;
    *dest++ = len < 1 ? '0' : *src;
    *dest = 0;

}