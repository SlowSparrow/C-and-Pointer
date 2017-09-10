//
// Created by latham on 17-8-26.
//
#include "../initial.h"
int count_chars(char const * str,char const * chars);
int paliandrome(char *string);

void c9_p1(){
    char a[] = "ab cbA";
//    char b[] = "ac";
//    int c = count_chars(a,b);
    int d = paliandrome(a);
}

int paliandrome(char *string){
    char* end = string;
    while( *end++ != NUL) ;
    end = end-2;
    while( end > string ){

        while( !isalpha(*end) ){
            end--;
        }

        while( !isalpha(*string) ){
            string++;
        }

        *string = tolower(*string);
        *end = tolower(*end);

        if( *end != *string ){
            return FALSE;
        }

        end--;
        string++;
    }

    return TRUE;
}


int count_chars(char const * str,char const * chars){
    int counter = 0;
    char * it = chars;
    while( *str != NUL ){
        while( *it != NUL ){
            if( *str == *it++){
                counter++;
                break;
            }
        }
        it = chars;
        str++;
    }
    return counter;
}