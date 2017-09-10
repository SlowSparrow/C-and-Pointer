//
// Created by latham on 17-8-17.
//

#ifndef CANDPOINTER_INITIAL_H
#define CANDPOINTER_INITIAL_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <float.h>
#include<ctype.h>
#include<malloc.h>
#define  LEN 100
#define NUL '\0'
#define FALSE 0
#define TRUE 1

typedef struct NODE{
    struct NODE * link;
    int value;
} Node;

typedef struct DNODE{
    struct DNODE * pre;
    struct DNODE * next;
    int value;
} DNode;

/*void c2_p2();
void c1_p4();
void c4_p1();*/
//void c4_p2();
//void c4_p3();
//void c4_p4();
//void c4_p6();
//void c4_p7();
//void p5_d1();
//void c5_p1();
//void c5_p2();
//void c5_p3();
//void c5_p4();
//void c6_pointer();
//void c6_p1();
//void c6_p2();
//void c6_p3();
//void btoa();
//void c7_p1();
//void c8_p1();
//void c8_p2();
//void c8_p5();
//void c8_p8();
//void c9_p1();
//void c9_11();
//void c9_p12();
//void c9_p15();
//void c10_p1();
//int sort_11();
//void c11_p2();
//void creatList();
//void creatDList();
void mystery( int n );

#endif //CANDPOINTER_INITIAL_H
