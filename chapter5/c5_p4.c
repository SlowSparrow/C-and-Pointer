//
// Created by latham on 17-8-22.
//
#include "../initial.h"

void set_bit(char bit_array[], unsigned bit_number){
    bit_array[bit_number] = '1';
}

void clear_bit(char bit_array[], unsigned bit_number){
    bit_array[bit_number] = '0';
}


void assign_bit(char bit_array[], unsigned bit_number,int value){
    if(value=='0')
        bit_array[bit_number] = '0';
    else
        bit_array[bit_number] = '1';
}

int test_bit(char bit_array[], unsigned bit_number){
    if(bit_array[bit_number] != '0')
        return 1;
    else
        return 0;
}

void
print(char bit_array[]){
    for(int i=0;i<LEN;i++){
        printf("%c",bit_array[i]);
    }
}


void
c5_p4(){
    char bit_array[LEN];

    for(int i=0;i<LEN;i++){
        bit_array[i] = '0';
    }
}
