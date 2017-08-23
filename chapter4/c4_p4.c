//
// Created by latham on 17-8-17.
//
#include "../initial.h"

void copy_n(char cpy[10], char src[10], int n);

void
c4_p4(){
    char src[10] = "abcde";
    char cpy[10];

    copy_n(cpy,src,5);
    printf("src = %s\n",src);
    printf("cpy = %s\n",cpy);

}

void
copy_n(char cpy[10], char src[10], int n) {

    int mark;
    for(int i=0;i<n;i++){
        if(src[i] != '\0'){
            cpy[i] = src[i];
        }
            mark = i;
    }
    if(src[mark] == '\0'){
        for(;mark<n;mark++){
            cpy[mark] = '\0';
        }
    }else{
        cpy[mark+1] = '\0';
    }
}
