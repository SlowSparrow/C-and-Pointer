//
// Created by latham on 17-8-17.
//
#include <stdio.h>
#include <string.h>

#define LENGTH 1000
void c1_p4();

void p4(void){

    char input[LENGTH];
    char output[LENGTH];
    int len;
    int max = 0;
    while(gets(input)!=NULL){
        len = strlen(input);
        if(max<len){
            max = len;
            strcpy(output,input);
        }
    }

    printf("%s\n",output);

}
