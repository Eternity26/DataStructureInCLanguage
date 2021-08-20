//
// Created by 21182 on 2021/8/19.
//
#include "stdlib.h"
#include "stdio.h"

#define Elemtype int

typedef struct DNode {
    Elemtype data;
    DNode *prior, *next;
} DNode, *DLinkList;

static bool InitList(DLinkList &L);

static bool InsertNextDNode(DNode *p, DNode *q);

static bool DeleteNextDNode(DNode *p);

static bool DestroyListMaintainingHeadNode(DLinkList &L);

static bool DestroyList(DLinkList &L);

static bool TraversePrior(DNode *p);

static bool TraverseNext(DNode *p);

static bool TraversePriorIgnoringHeadnode(DNode *p);

static bool TraverseNextIgnoringTailnode(DNode *p);

static bool InitList(DLinkList &L) {
    L = (DNode *) malloc(sizeof(DNode));
    if (L == nullptr)
        return false;
    L->next = nullptr;
    L->prior = nullptr;
    return true;
}

static bool DestroyListMaintainingHeadNode(DLinkList &L) {
    while (L->next != nullptr) {
        DeleteNextDNode(L);
    }
}

static bool DestroyList(DLinkList &L) {
    while (L->next != nullptr) {
        DeleteNextDNode(L);
    }
    free(L);
    L = nullptr;
}

//将q结点插入到p结点后
static bool InsertNextDNode(DNode *p, DNode *q) {
    if (p == nullptr || q == nullptr)
        return false;
    q->next = p->next;
    if (p->next != nullptr)
        p->next->prior = q;
    p->next = q;
    q->prior = p;
    return true;
}

//将p结点后的q结点删除
static bool DeleteNextDNode(DNode *p) {
    if (p == nullptr || p->next == nullptr)
        return false;
    DNode *q = p->next;
    if (q->next != nullptr)
        q->next->prior = p;
    p->next = q->next;
    free(q);
    return true;
}

static bool TraversePrior(DNode *p) {
    while (p != nullptr) {
        //TODO 遍历时对结点p的具体操作
        p = p->prior;
    }
    return true
}


static bool TraverseNext(DNode *p) {
    while (p != nullptr) {
        //TODO 遍历时对结点p的具体操作
        p = p->next;
    }
    return true;
}

static bool TraversePriorIgnoringHeadnode(DNode *p) {
    while (p->prior != nullptr) {
        //TODO 遍历时对结点p的具体操作
        p = p->prior;
    }
}

static bool TraverseNextIgnoringTailnode(DNode *p) {
    while (p->next != nullptr) {
        //TODO 遍历时对结点p的具体操作
        p = p->next;
    }
}


int main() {

}