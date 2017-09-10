//
// Created by latham on 17-8-27.
//
#include <stdio.h>
#include "../initial.h"
void scanInput();
int scanInput2();

void c9_11(){
    scanInput2();
}

char const whitespace[] = " \n\t\r\f\v";

int scanInput2(){
    char buff[101];
    int count;
    count = 0;
    while( gets(buff) ){
        char * word;
        for( word = strtok(buff,whitespace);
            word != NULL;
            word=strtok(NULL,whitespace)){
            if(strcmp(word,"the") == 0){
                count += 1;
            }
        }
    }
    printf("%d\n",count);
    printf("%s\n",buff);
    return EXIT_SUCCESS;
}


void scanInput(){
    char a[100];
    char * c = a;
    char b[] = "the";
    int ch;
    char * current,*last,*blank;
    int count = 0;
    //get inputstream
    while((ch=getchar())!='#'){
        *c++ = (char)ch;
    };
    if( a!=NULL )
        current = strstr(a,b);

    while( current != NULL ){
        last = current;
        blank = last;
        current = strstr(last+1,b);
        if( isblank(*(blank-1)) && isblank(*(current-1)))
        {
            count++;
        }
    }
    count = count + '0';
    putchar(count);
}
