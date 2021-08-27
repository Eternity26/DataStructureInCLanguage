//
// Created by 21182 on 2021/8/21.
//
#include "stdio.h"

#define Elemtype int
#define MAXSIZE 10

typedef struct {
    Elemtype data[MAXSIZE];
    int top;
} SqStack;

static void InitStack(SqStack &S);

static bool IsEmpty(SqStack S);

static bool IsFull(SqStack S);

static bool Push(SqStack &S, Elemtype e);

static bool Pop(SqStack &S, Elemtype &e);

static bool GetTop(SqStack S, Elemtype &e);

static void InitStack(SqStack &S) {//第一种顺序栈的实现，top值即为当前栈顶元素的下标
    S.top = -1;
}

static bool IsEmpty(SqStack S) {
    return (S.top == -1);
}

static bool IsFull(SqStack S) {
    return (S.top == MAXSIZE - 1);
}

static bool Push(SqStack &S, Elemtype e) {
    if (S.top == MAXSIZE - 1)
        return false;
    S.data[++S.top] = e;//这种自增/自减的顺序与第二种实现有差别
    return true;
}

static bool Pop(SqStack &S, Elemtype &e) {
    if (S.top == -1)
        return false;
    e = S.data[S.top--];
    return true;
}

static bool GetTop(SqStack S, Elemtype &e) {
    if (S.top == -1)
        return false;
    e = S.data[S.top];
    return true;
}

int main(){

}