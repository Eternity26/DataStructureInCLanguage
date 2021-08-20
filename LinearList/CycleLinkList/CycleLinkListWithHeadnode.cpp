//
// Created by 21182 on 2021/8/20.
//

#include "stdlib.h"
#include "stdio.h"

#define Elemtype int


typedef struct LNode {
    Elemtype data;
    LNode *next;
} LNode, *LinkList;

static bool InitList(LinkList &L){
    L = (LNode*) malloc(sizeof(LNode));
    L->next = L;
}

