//
// Created by latham on 17-8-21.
//
#include "../initial.h"

void
p5_d1(){
    printf("%d\n",count_bits2(-25));
//    printf("%f\n",(float)25/10);
//    printf("%f\n",(float)(25/10));

}

int
count_bits(unsigned value){

    int ones=0;

    for(;value!=0;value=value>>1){

        if( value%2!=0 ){
            ones++;
        }
    }
    return ones;
}

int
count_bits2(int value){

    int ones=0;

    for(;value!=0;value>>=1){

        if( value&1 != 0 ){
            ones+=1;
        }
    }
    return ones;
}