//
// Created by latham on 17-8-17.
//
#include "../initial.h"
void c4_p1(){

    double an,atemp;
    an = 1;
    double end;
    int n;
    scanf("%d",&n);
    while( atemp != end ){
        end = atemp;
        atemp = (an+n/an)/2;
        an = atemp;
        printf("an=%f\n",an);
    }

    printf("%f",end);

}
