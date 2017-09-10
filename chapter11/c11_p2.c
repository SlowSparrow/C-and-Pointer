//
// Created by latham on 17-9-6.
//
#include "../initial.h"
int* createArray();

void c11_p2(){
//    int* array = createArray();
//    printf("%d%d",array[0],array[1]);

}

int* createArray(){
    int * array;
    int len = 2;
    array = malloc(sizeof(int)*(len+1));
    if( array == NULL ){
        return NULL;
    }

    int ch;
    int count = 0;

    while( scanf("%d",&ch) == 1 ){
        count += 1;
        if( count > len ){
            len += len;
            array = realloc(array,sizeof(int)*(len+1));
            if( array == NULL)
                return NULL;
        }
        array[count] = ch;
    }

    if( count < len){
        array = (int)realloc(array,sizeof(int)*(count+1));
        if( array == NULL)
            return NULL;
    }

    array[0] = count;

    return array;
}
