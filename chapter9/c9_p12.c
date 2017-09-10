//
// Created by latham on 17-8-27.
//

#include "../initial.h"

int prepare_key(char* key,char *keys);
void encrypt( char *data,char const * key);
void decrypt( char *data,char const * key);
void
c9_p12(){
    char root[] = "TRAILBLAZERS";
    char keys[26];
    prepare_key(root,keys);
    char original[] = "wode  maya";
    encrypt(original,keys);
    printf("%s\n",original);
    decrypt(original,keys);
    printf("%s\n",original);
}

int
prepare_key(char* key,char *keys){
    char alpha[] = "abcdefghijklmnopqrstuvwxyz";
    int position = 0;
    int where = 0;
    char * pos = alpha;
    while( *key != NUL ){
        *key = tolower(*key);
        where = *key - 'a';
        if(alpha[where] == '0'){
            key++;
            continue;
        }
        keys[position] = *key;
        alpha[where] = '0';
        key++;
        position++;
    }

    //put other in order to keys
    while(position<26){
        while( *pos != NUL){
            if( *pos!='0' )
                keys[position++] = *pos;
            pos++;
        }
    }
    keys[26] = '\0';
    printf("keys table:\n%s\n",keys);
    printf("%s\n",alpha);
}

void
encrypt( char *data,char const * key){
    while( *data != NUL ){
        if(isalpha(*data)){
            *data = key[(*data-'a')];
        }
        data++;
    }
}

void
decrypt( char *data,char const * key) {
    while( *data != NUL ){
        int pos = 0;
        if(isalpha(*data)){
            while( key[pos] != NUL ){
                if( key[pos] == *data ){
                    *data = 'a' + pos;
                    break;
                }
                pos ++;
            }
        }
        data++;
    }
}