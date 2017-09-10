//
// Created by latham on 17-9-6.
//

#include "../initial.h"
void printLis(Node * node);
void destory(Node * node);
int delete(Node** head,int value);
Node* find(Node* head,int value);
Node* sll_reverse(Node** first);
Node* sll_reverse2(Node* first);

void creatList(){
    Node * head;
    Node * node;
    head = (Node*)malloc(sizeof(Node));
    head->link = NULL;
    int ch;
    //head insert to establish a list
    while( (ch = getchar()) != '#' ){
        node = (Node*)malloc(sizeof(Node));
        node->value = ch;
        node->link = head->link;
        head->link = node;
    }
    printLis(head);
//    sll_reverse(&head);
    sll_reverse2(head);
    printLis(head);
    destory(head);
}

void printLis(Node * node){
    Node* it = node;
    while( it != NULL){
        printf("%d\n",it->value);
        it = it->link;
    }
}

void destory(Node * node){
    Node* it = node;
    while( it != NULL){
        node = it;
        it = it->link;
        free(node);
    }
}

int delete(Node** head,int value){
    Node* pointer = *head;
}

Node* find(Node* head,int value){
    while( head != NULL ){
        if( head->value == value ){
            return head;
        }
        head = head->link;
    }
    return head;
}

Node* sll_reverse(Node** first){
    if( *first==NULL ){
        return NULL;
    }
    Node* head = *first;
    Node* this = head->link;
    head->link = NULL;
    Node* next;
    while( this != NULL ){
        //tail insert
        next = this->link;
        this->link = head->link;
        head->link = this;
        this = next;
    }
    return *first;
}

Node* sll_reverse2(Node* first){
    if( first==NULL ){
        return NULL;
    }
    Node* head = first;
    Node* this = head->link;
    head->link = NULL;
    Node* next;
    while( this != NULL ){
        //tail insert
        next = this->link;
        this->link = head->link;
        head->link = this;
        this = next;
    }
    return first;
}