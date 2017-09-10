//
// Created by latham on 17-9-6.
//

#include "../initial.h"
void printDLis(DNode * node);
void create(DNode* root);
void destoryD(DNode * node);
int deleteD(DNode** rootp,DNode* node);
int insertD(DNode * node,int value);
//Node* find(Node* head,int value);

void creatDList(){
    DNode * this;
    DNode * new;
    DNode * root;
    int value;
    root = (DNode *)malloc(sizeof(DNode));
    root->pre = NULL;
    root->next = NULL;
    create(root);
    insertD(root,50);
    printDLis(root);
    destoryD(root);
    free(root);
}

void create(DNode* root){
    DNode * this = root;
    DNode * new;
    int ch;
    //head insert to establish a list
    while( (ch = getchar()) != '#' ){
        new = (DNode*)malloc(sizeof(Node));
        new->value = ch;

        new->pre = this;
        this->next = new;
        new->next = NULL;
        this = this->next;
        root->pre = this;
    }
}

int insertD(DNode * node,int value){
    DNode * this;
    DNode * next;
    DNode * new;

    for(this = node;(next = this->next)!=NULL;this = next){
        if( next->value > value){
            break;
        }

        if( next->value == value){
            return 0;
        }
    };

    new = (DNode*)malloc(sizeof(DNode));
    if( new == NULL )
        return -1;
    new->value = value;

    new->next = next;
    this->next = new;

    // head insert
    if( this != NULL ){
        new->pre = this;
    }else{
        new->pre = NULL;
    }

    if( next != NULL){
        next->pre = new;
    }else{
        node->pre = new;
    }
}


void printDLis(DNode * node){
    DNode* it = node;
    while( it != NULL){
        printf("%d\n",it->value);
        it = it->next;
    }
}

void destoryD(DNode * node){
    DNode* it = node;
    while( it != NULL){
        node = it;
        it = it->next;
        free(node);
    }
}

int deleteD(DNode** rootp,DNode* node){
    if(node==NULL || *rootp==NULL)
        return FALSE;

    DNode * this = *rootp;
    while( this != node )
        this = this->next;

    this->pre->next = this->next;
    this->next->pre = this->pre;

    free(this);
}
