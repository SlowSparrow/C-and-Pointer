//
// Created by latham on 17-8-23.
//
#include "../initial.h"

void btoa(){
    unsigned int value = 10938;
    binary_to_ascii(value);
}

void binary_to_ascii(unsigned int value){
    unsigned int q;
    q = value/10;
    if(q!=0)
        binary_to_ascii(q);
    putchar( value%10 + '0' );
}