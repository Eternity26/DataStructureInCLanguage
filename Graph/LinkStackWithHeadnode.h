//
// Created by 21182 on 2021/9/16.
//

#ifndef MAIN_CPP_LINKSTACKWITHHEADNODE_H
#define MAIN_CPP_LINKSTACKWITHHEADNODE_H

#endif //MAIN_CPP_LINKSTACKWITHHEADNODE_H

#include "stdio.h"
#include "stdlib.h"

typedef struct Linknode {
    Elemtype data;
    struct Linknode *next;
} Linknode;

typedef struct {
    Linknode *front, *rear;
} LiQueue;

static bool InitQueue(LiQueue *&Q);

static bool EnQueue(LiQueue *&Q, QueueElemtype e);

static bool DeQueue(LiQueue *&Q, QueueElemtype &e);

static bool GetHead(LiQueue *Q, QueueElemtype &e);

static bool InitQueue(LiQueue *&Q) {
    Q = (LiQueue *) malloc(sizeof(LiQueue));
    if (Q == nullptr)
        return false;
    Q->rear = Q->front = (Linknode *) malloc(sizeof(Linknode));
    if (Q->rear == nullptr)
        return false;
    Q->rear->next = nullptr;
    return true;
}

static bool EnQueue(LiQueue *&Q, QueueElemtype e) {
    if (Q == nullptr)
        return false;
    Linknode *s = (Linknode *) malloc(sizeof(Linknode));
    if (s == nullptr)
        return false;
    s->data = e;
    s->next = nullptr;
    Q->rear->next = s;
    Q->rear = s;
    return true;
}

static bool DeQueue(LiQueue *&Q, QueueElemtype &e) {
    if (Q->rear == Q->front || Q == nullptr)
        return false;
    Linknode *p = Q->front->next;
    Q->front->next = p->next;
    if (Q->rear == p)
        Q->rear = Q->front;
    free(p);
    return true;
}

static bool GetHead(LiQueue *Q, QueueElemtype &e) {
    if (Q->rear == Q->front || Q == nullptr)
        return false;
    e = Q->front->next->data;
    return true;
}
