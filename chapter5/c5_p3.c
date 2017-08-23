//
// Created by latham on 17-8-21.
//
#include "../initial.h"

unsigned int
reverse_bits(unsigned int value){
    int position = 1;
    unsigned int dire = 0;
    for(;value!=0;value>>=1){
        if( value & 1 ){
            dire = dire | 1 << sizeof(value)*8 - position;//if there has no meaningful operation,seems jump over the line
        }
        position ++;
    }
    printf("dire=%d\n",dire);
    return 1;
}

unsigned int
reverse_bits2(unsigned int value){
    unsigned int i;
    unsigned int answer = 0;
    for(i=1 ;i != 0;i<<=1)
    {
        answer<<=1;
        if( value & 1 ){
            answer = answer | 1;
        }
        value>>=1;
    }
    printf("answer=%d\n",answer);

    return answer;
}

void
c5_p3(){
    reverse_bits(2);
    reverse_bits2(2);
}


