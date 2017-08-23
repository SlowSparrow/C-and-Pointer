//
// Created by latham on 17-8-17.
//
#include "../initial.h"

void
c4_p3(){
    int a,b,c;
    int max,min,mid;
    scanf("%d %d %d",&a,&b,&c);

    if( a+b>c && a+c>b && b+c>a){
        if(a==b||b==c||c==a){
            if(a==b && a==c){
                printf("all equals\n");
            }else{
                printf("this is equal yao\n");
            }
        }else{
            printf("a regular triangle");
        }
    }else{
        printf("not triangle\n");
    }

}