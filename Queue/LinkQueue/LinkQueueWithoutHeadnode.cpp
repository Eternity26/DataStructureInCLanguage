//
// Created by 21182 on 2021/8/22.
//

#include "stdio.h"
#include "stdlib.h"

#define Elemtype int

typedef struct Linknode {
    Elemtype data;
    Linknode *next;
} Linknode;

typedef struct {
    Linknode *front, *rear;
} LiQueue;

static bool InitQueue(LiQueue *&Q);

static bool EnQueue(LiQueue *&Q, Elemtype e);

static bool DeQueue(LiQueue *&Q, Elemtype &e);

static bool GetHead(LiQueue *Q, Elemtype &e);

static bool InitQueue(LiQueue *&Q) {
    Q = (LiQueue *) malloc(sizeof(LiQueue));
    if (Q == nullptr)
        return false;
    Q->front = nullptr;
    Q->rear = nullptr;
    return true;
}

static bool EnQueue(LiQueue *&Q, Elemtype e) {
    if (Q == nullptr)
        return false;
    Linknode *p = (Linknode *) malloc(sizeof(Linknode));
    if (p == nullptr)
        return false;
    p->data = e;
    if (Q->rear == nullptr) {
        Q->front = Q->rear = p;
        return true;
    }
    Q->rear->next = p;
    Q->rear = p;
    return true;
}

static bool DeQueue(LiQueue *&Q, Elemtype &e) {
    if (Q == nullptr || Q->rear == nullptr)
        return false;
    e = Q->front->data;
    if (Q->front == Q->rear) {
        Linknode *p = Q->front;
        Q->front = nullptr;
        Q->rear = nullptr;
        free(p);
        return true;
    }
    Linknode *p = Q->front;
    Q->front = p->next;
    free(p);
    return true;
}

static bool GetHead(LiQueue *Q, Elemtype &e) {
    if (Q == nullptr || Q->rear == nullptr)
        return false;
    e = Q->front->data;
    return true;
}