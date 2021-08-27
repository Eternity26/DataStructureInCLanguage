//
// Created by 21182 on 2021/8/21.
//

#include "stdio.h"

#define Elemtype int
#define MAXSIZE 10

typedef struct {
    Elemtype data[MAXSIZE];
    int top0, top1;
} SqStack;

static void InitStack(SqStack &S);

static bool IsEmpty(SqStack S);

static bool IsFull(SqStack S);

static bool Push0(SqStack &S, Elemtype e);

static bool Pop0(SqStack &S, Elemtype &e);

static bool Push1(SqStack &S, Elemtype e);

static bool Pop1(SqStack &S, Elemtype &e);

static bool GetTop0(SqStack S, Elemtype &e);

static bool GetTop1(SqStack S, Elemtype &e);


static void InitStack(SqStack &S) {//共享栈，并采取顺序栈的第一种实现方式，有两个栈顶
    S.top0 = -1;
    S.top1 = MAXSIZE;
}

static bool IsEmpty(SqStack S) {
    return (S.top0 == -1 && S.top1 == MAXSIZE);
}

static bool IsFull(SqStack S) {
    return (S.top0 + 1 == S.top1);
}

static bool Push0(SqStack &S, Elemtype e) {
    if (S.top0 + 1 == S.top1)
        return false;
    S.data[++S.top0] = e;
    return true;
}

static bool Pop0(SqStack &S, Elemtype &e) {
    if (S.top0 == -1)
        return false;
    e = S.data[S.top0--];
    return true;
}

static bool Push1(SqStack &S, Elemtype e) {
    if (S.top0 + 1 == S.top1)
        return false;
    S.data[--S.top1] = e;
    return true;
}

static bool Pop1(SqStack &S, Elemtype &e) {
    if (S.top1 == MAXSIZE)
        return false;
    e = S.data[S.top1++];
    return true;
}

static bool GetTop0(SqStack S, Elemtype &e) {
    if (S.top0 == -1)
        return false;
    e = S.data[S.top0];
}

static bool GetTop1(SqStack S, Elemtype &e) {
    if (S.top1 == MAXSIZE)
        return false;
    e = S.data[S.top1];
}

int main(){

}