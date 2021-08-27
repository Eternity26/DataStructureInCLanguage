//
// Created by 21182 on 2021/8/22.
//

#include "stdio.h"

#define Elemtype int
#define MAXSIZE 10

typedef struct {
    Elemtype data[MAXSIZE];
    int front, rear, size;
} SqQueue;

static void InitQueue(SqQueue Q);

static bool EnQueue(SqQueue &Q, Elemtype e);

static bool DeQueue(SqQueue &Q, Elemtype &e);

static bool GetHead(SqQueue Q, Elemtype &e);

static void InitQueue(SqQueue Q) {
    Q.size = Q.front = Q.rear = 0;
}

static bool EnQueue(SqQueue &Q, Elemtype e) {
    if (Q.size == MAXSIZE)
        return false;
    Q.data[Q.rear] = e;
    Q.rear = (Q.rear + 1) % MAXSIZE;
    Q.size++;
    return true;
}

static bool DeQueue(SqQueue &Q, Elemtype &e) {
    if (Q.size == 0)
        return false;
    e = Q.data[Q.front];
    Q.front = (Q.front + 1) % MAXSIZE;
    Q.size--;
    return true;
}

static bool GetHead(SqQueue Q, Elemtype &e) {
    if (Q.size == 0)
        return false;
    e = Q.data[Q.front];
    return true;
}

int main() {

}