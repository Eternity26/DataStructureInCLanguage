//
// Created by 21182 on 2021/8/22.
//

#include "stdio.h"

#define Elemtype int
#define MAXSIZE 10

typedef struct {
    Elemtype data[MAXSIZE];
    int front, rear, tag;
} SqQueue;

static void InitQueue(SqQueue Q) {
    Q.front = Q.rear = 0;
}

static void InitQueue(SqQueue Q);

static bool EnQueue(SqQueue &Q, Elemtype e);

static bool DeQueue(SqQueue &Q, Elemtype &e);

static bool GetHead(SqQueue Q, Elemtype &e);

static bool EnQueue(SqQueue &Q, Elemtype e) {
    if (Q.front == Q.rear && Q.tag == 1)
        return false;
    Q.data[Q.rear] = e;
    Q.rear = (Q.rear + 1) % MAXSIZE;
    Q.tag = 1;
    return true;
}

static bool DeQueue(SqQueue &Q, Elemtype &e) {
    if (Q.front == Q.rear && Q.tag == 0)
        return false;
    e = Q.data[Q.front];
    Q.front = (Q.front + 1) % MAXSIZE;
    Q.tag = 0;
    return true;
}

static bool GetHead(SqQueue Q, Elemtype &e) {
    if (Q.rear == Q.front && Q.tag == 0)
        return false;
    e = Q.data[Q.front];
    return true;
}

int main() {

}