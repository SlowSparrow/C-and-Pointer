//
// Created by latham on 17-8-24.
//
#include "../initial.h"
float single_tax( float income );
int identity_matrix(int array[][10]);
int identity_matrix2(int * array,int size);

void c8_p1(){
    char a[3][6][4][5] = {
            {},
            {
                    {},
                    {},
                    {
                            {},
                            {},
                            {
                                    0,0,0,'A'
                            },
                            {}
                    },
                    {},
                    {},
                    {}
            },
            {}
    };

    for(int i=0;i<3;i++){
        for(int j=0;j<6;j++){
            for(int k=0;k<4;k++){
                for(int m=0;m<5;m++){
                    printf("%d",a[i][j][k][m]);
                }
                printf("\n");
            }
            printf("\n");
        }
        printf("\n");
    }
}

static float income_standard[] = {0,23350,56550,117950,256500,DBL_MAX};
static float tax[] = {0,3502.50,12789.50,31832.50,81710.50};
static float tax_rate[] = {.15,.28,.31,.36,.396};

void c8_p2(){
    int array[][3] = {
            {1,0,0},
            {0,1,0},
            {0,0,1}
    };
    int a = identity_matrix(array);
    int b = identity_matrix2(*array,3);
}

float single_tax( float income ){
    int count = 0;
    while( income >= income_standard[count] ){
        count++;
    }
        count--;
    return tax[count] + tax_rate[count]*(income - income_standard[count]);
}

int identity_matrix(int array[][10]){
    int i,j;
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
//            if( j==i ){
//                if( array[i][i]!=1 )
//                    return FALSE;
//            }else{
//                if( array[i][j] !=0 )
//                    return FALSE;
//            }
            //a smart and concise way
            if( array[i][j] != ( i==j )){
                return FALSE;
            }
        }
        return TRUE;
    }
}

int identity_matrix2(int * array,int size){
    int i,j;
    for( i = 0; i < size; i++ ) {
        for ( j = 0; j < size; j++ ) {
//            if( array[i*size + j] != ( i == j )){
//                return FALSE;
//            }
            //a smart pointer way
            if( *array++ != ( i == j )){
                return FALSE;
            }
        }
    }
    return TRUE;
}