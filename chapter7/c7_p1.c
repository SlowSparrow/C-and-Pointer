//
// Created by latham on 17-8-24.
//
#include "../initial.h"
int hermite(int n,int x);

void c7_p1(){
//    int a = hermite(3,2);
//    int b = gcd(12,15);
    char string[] = "123n445";
    int c = ascii_to_integer(string);
}

int hermite(int n,int x){
    if( n <= 0)
        return 1;
    if( n == 1 )
        return 2*x;
    if( n >= 2)
        return 2*x*hermite(n-1,x) - 2*(n-1)*hermite(n-2,x);
}

int gcd(int m,int n){
    if( m < 0 || n < 0 ){
        return 0;
    }
    int r = m%n;
    if( r == 0){
        return n;
    }
    return gcd(n,r);
}

int ascii_to_integer(char* string){
    int sum = 0;
    int ch;
    while( *string != NUL ){
        if( *string < '0' || *string > '9' )
            return 0;
        else{
            ch = *string - '0';
            sum = sum*10 + ch;
        }
        string ++;
    }
    return sum;
}