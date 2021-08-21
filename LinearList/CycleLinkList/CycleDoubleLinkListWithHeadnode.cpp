//
// Created by 21182 on 2021/8/20.
//

#include "stdlib.h"
#include "stdio.h"

#define Elemtype int

typedef struct DNode {
    Elemtype data;
    struct DNode *prior, *next;
} DNode, *DLinkList;

static bool InitList(DLinkList &L) {
    L = (DNode *) malloc(sizeof(DNode));
    if (L == nullptr)
        return false;
    L->next = L;
    L->prior = L;
    return true;
}

static bool isEmpty(DLinkList L){
    return (L->next == L&&L->prior == L);
}

static bool isHead(DLinkList L,DNode* p){
    return (p == L);
}

static bool isTail(DLinkList L,DNode* p){
    return (p->next == L);
}

static bool InsertNextNode(DNode* p,DNode* q){
    if(p == nullptr||q == nullptr)
        return false;
    q->next = p->next;
    p->next->prior = q;
    p->next = q;
    q->prior = p;
    return true;
}

static bool DeleteNextNode(DNode* p){
    if(p == nullptr)
        return false;
    DNode* q = p->next;
    p->next = q->next;
    q->next->prior = p;
    free(q);
    return true
}