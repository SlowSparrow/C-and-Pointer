//
// Created by latham on 17-8-22.
//
#include "../initial.h"
int find_chars(char** strings,char value);

void c6_pointer(){
    char a[2][10] = {"what","the","boot"};
    char** strings = a;
    char value = 'w';
    int result = find_chars(strings,value);
    putchar(result);
}


int
find_chars(char** strings,char value){
    char * string;
    while( (string = *strings++) != NULL ){

        while( *string != '\0' ){
            if( *string++ == value )
                return TRUE;
        }

    }
    return FALSE;
}