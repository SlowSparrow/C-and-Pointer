//
// Created by latham on 17-8-17.
//
#include "../initial.h"
void c4_p2(){
    findSushu(100);
    findSushu2();
}

void findSushu(int n){
    int Yes=1;
    for(int i=1;i<=n;i++){
        for(int j=2;j<=i/2;j++){
            if(i%j==0){
                Yes=0;
                break;
            }
        }
        if(Yes){
            printf("%d is primer\n",i);
        }
        Yes=1;
    }
}

void findSushu2()
{
    int number;
    int divisor;
/*
** One and two are easy.
*/
    printf( "1\n2\n" );
/*
** No other even numbers are prime; look at the remaining odd ones.
*/
    for( number = 3; number <= 100; number = number + 2 ){
/*
** See if any divisor from 3 up to the number evenly divides the
** number.
*/
        for( divisor = 3; divisor < number; divisor = divisor + 2 ){
            if( number % divisor == 0 )
                break;
        }
/*
** If the loop above stopped because the divisor got too big,
** we’ve got a prime.
*/
        if( divisor >= number )
            printf( "%d\n", number );
    }
}