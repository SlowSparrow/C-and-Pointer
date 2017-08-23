//
// Created by latham on 17-8-17.
//
#include "../initial.h"
void deblank(char string[]);
int is_white( int ch );

void
c4_p7(){
    char string[]=" wode  jia      dong bei,songhua  jiang shang a a a a a  !";
/*    deblank(string);//use old space
    printf("%s",string);*/
    deblank3(string);//using a new space
    printf("%s",string);
}

void
deblank(char string[]){

    int count = 0;
    int length = strlen(string);
    int i;

    for(i=0;i<length;i++){

        while(is_white(string[i])){
            count++;
            i++;
        }

        if( count>1 ){
            move(string,count,i,length);
        }

        count = 0;
    }
}

void
deblank2(char string[]){

    char *dest,*src;
    src = string;
    dest = string++;
    int ch;
    while((ch=*src++)!=NUL){
        if(is_white(ch)){
            if(src==string || !is_white(dest[-1])){
                *dest++ = ' ';
            }
        }else{
            *dest++ = ch;
        }
    }
    *dest = NUL;
}

void
deblank3(char string[]){

    char *dest,*src;
    src = string;
    dest = string;
    int ch;
    while((ch=*src)!=NUL){
        if(is_white(ch)){
            if(src==string || !is_white(dest[-1])){
                *dest++ = ' ';
            }
        }else{
            *dest++ = ch;
        }
        src++;
    }
    *dest = NUL;
}

void
move(char string[],int count,int i,int length){

    for(;i<length;i++){
        string[i-count+1] = string[i];
    }
    //a new string needs a new NUL
    string[i-count+1] = NUL;
}

int
is_white( int ch )
{
    return ch == ' ' || ch == '\t' || ch == '\v' || ch == '\f' || ch == '\n'
           || ch == '\r';
}