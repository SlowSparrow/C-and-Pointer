//
// Created by latham on 17-8-23.
//

#include "../initial.h"
int del_substr(char* str,char const * substr);
char* match( char *str, char *want );
int del_substr2( char *str, char const *substr );

void
c6_p2(){
    char str[] = "abcdefg";
    char sub[] = "def";

    int result = del_substr2(str,sub);
    printf("result=%d\n",result);
    printf("str=%s\n",str);
}

int
del_substr(char* str,char const * substr){
    char *p = str;
    char *q = str;
    char *i = substr;
    char *j = substr;
    char ch;
    int result = 0;
    if(str!=NULL)
    {
        if(*substr == NULL){
            return 1;
        }else{
            while(*p!='\0'){
                  if(*p==*i){
                      p++;
                      i++;
                      if(*i=='\0'){
                          result = TRUE;
                          break;
                      }
                  }else{
                      p = ++q;//move to next
                      i = j;//return to head
                  }
            }
            if(result){
                while(*p != '\0'){
                    ch = *p;
                    *q++ = ch;
                    p++;
                }
                *q = *p;
                return 1;
            }else
                return 0;

        }
    }
}

char *
match( char *str, char *want )
{
/*
** Keep looking while there are more characters in ’want’. We fall out
** of the loop if we get a match.
*/
    while( *want != NUL )
        if( *str++ != *want++ )
            return NULL;
    return str;
}

int
del_substr2( char *str, char const *substr )
{
    char *next;
/*
** Look through the string for the first occurrence of the substring.
*/
    while( *str != NUL ){
        next = match( str, substr );
        if( next != NULL )
            break;
        str++;
    }
/*
** If we reached the end of the string, then the substring was not
** found.
*/
    if( *str == NUL )
        return FALSE;
/*
** Delete the substring by copying the bytes after it over the bytes of
** the substring itself.
*/
    while( *str++ = *next++ )
        ;
    return TRUE;
}