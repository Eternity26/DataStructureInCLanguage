//
// Created by 21182 on 2021/8/21.
//

#include "stdio.h"
#include "stdlib.h"

#define Elemtype int

typedef struct Linknode {
    Elemtype data;
    struct Linknode *next;
} Linknode, *LiStack;

static bool InitStack(LiStack &S);

static bool IsEmpty(LiStack S);

static bool IsFull(LiStack S);

static bool Push(LiStack &S, Elemtype e);

static bool Pop(LiStack &S, Elemtype &e);

static bool GetTop(LiStack S, Elemtype &e);

static bool InitStack(LiStack &S) {
    S = (Linknode *) malloc(sizeof(Linknode));
    if (S == nullptr)
        return false;
    S->next = nullptr;
    return true;
}

static bool IsEmpty(LiStack S) {
    return (S->next == nullptr);
}

static bool IsFull(LiStack S) {
    Linknode *p = (Linknode *) malloc(sizeof(Linknode));
    return (p == nullptr);
}

static bool Push(LiStack &S, Elemtype e) {
    Linknode *p = (Linknode *) malloc(sizeof(Linknode));
    if (p == nullptr || S == nullptr)
        return false;
    p->data = e;
    p->next = S->next;
    S->next = p;
    return true;
}

static bool Pop(LiStack &S, Elemtype &e) {
    if (S == nullptr)
        return false;
    e = S->next->data;
    Linknode *p = S->next;
    S->next = p->next;
    free(p);
    return true;
}

static bool GetTop(LiStack S, Elemtype &e) {
    if (S == nullptr)
        return false;
    e = S->next->data;
    return true;
}