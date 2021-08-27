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

static void InitStack(LiStack S);

static bool IsEmpty(LiStack S);

static bool IsFull();

static bool Push(LiStack &S, Elemtype e);

static bool Pop(LiStack &S, Elemtype &e);

static bool GetTop(LiStack S, Elemtype &e);

static void InitStack(LiStack S) {
    S = nullptr;
}

static bool IsEmpty(LiStack S) {
    return (S == nullptr);
}

static bool IsFull() {
    Linknode *p = (Linknode *) malloc(sizeof(Linknode));
    return (p == nullptr);
}

static bool Push(LiStack &S, Elemtype e) {
    Linknode *p = (Linknode *) malloc(sizeof(Linknode));
    if (p == nullptr)
        return false;
    p->data = e;
    if (S == nullptr) {
        p->next = nullptr;
        S = p;
    }
    p->next = S;
    S = p;
    return true;
}

static bool Pop(LiStack &S, Elemtype &e) {
    if (S == nullptr)
        return false;
    e = S->data;
    Linknode *p = S;
    S = S->next;
    free(p);
    return true;
}

static bool GetTop(LiStack S, Elemtype &e) {
    if (S == nullptr)
        return false;
    e = S->data;
    return true;
}

int main() {

}