//
// Created by latham on 17-8-17.
//
#include "../initial.h"

void c2_p2(){
    char input[LEN];
    int count=0;
    gets(input);
    int len = strlen(input);
    int i = 0;
    while(i<len){
        if(input[i]=='{')
            count+=1;
        if(input[i]=='}')
            count-=1;
        i++;
    }

    if(count==0){
        printf("matched!");
    }else{
        printf("not match!");
    }
}
