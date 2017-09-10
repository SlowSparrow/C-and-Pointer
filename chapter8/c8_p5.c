//
// Created by latham on 17-8-25.
//
#include "../initial.h"
void matrix_multi(int m1[][2],int m2[][3],int *r,int x,int y,int z);
void matrix_multi2(int *m1,int *m2,int *r,int x,int y,int z);

void c8_p5(){

    int a[][2] = {
            {1,3},
            {2,4}
    };

    int b[][3] = {
            {1,3,5},
            {2,4,5}
    };

    int c[2][3];

    matrix_multi2(a,b,c,2,2,3);
}


void matrix_multi(int m1[][2],int m2[][3],int *r,int x,int y,int z){
    int i,j,k;
    int sum = 0;
        for( i = 0;i<x;i++){//m1 row

            for( j = 0;j < z; j++) { //common line

                for(k = 0; k < y; k++) {
                    sum = sum + m1[i][k]*m2[k][j];
                }
                *r++ = sum;
                sum = 0;
            }

        }
}

void matrix_multi2(int *m1,int *m2,int *r,int x,int y,int z){
    int i,j,k;
    int sum = 0;
    for( i = 0;i<x;i++){//m1 row

        for( j = 0;j < z; j++) { //common line

            for(k = 0; k < y; k++) {
                sum = sum + m1[i*x+k]*m2[k*z+j];
            }

            *r++ = sum;
            sum = 0;
        }

    }
}
