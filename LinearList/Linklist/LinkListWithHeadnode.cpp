//
// Created by __new__ on 2021/8/18.
//

#include "stdlib.h"
#include "stdio.h"

#define Elemtype int

typedef struct LNode {
    Elemtype data;
    struct LNode *next;
} LNode, *LinkList;

static bool InitList(LinkList &L);

static bool isEmpty(LinkList L);

static bool ListInsert(LinkList &L, int i, Elemtype e);


static bool InsertNextNode(LNode *p, Elemtype e);

static bool ListDelete(LinkList &L, int i, Elemtype &e);

static bool DeleteNodeMethod1(LNode *p);

static bool DeleteNodeMethod2(LinkList &L, LNode *p);

static bool GetElem(LinkList L, int i, LNode *&p);

static bool LocateElem(LinkList L, Elemtype e, LNode *&p);

static bool Length(LinkList L, int &i);

static bool ListTailInsert(LinkList &L);

static bool ListHeadInsert(LinkList &L);


static bool InitList(LinkList &L) {
    LNode *head = (LNode *) malloc(sizeof(LNode));//head是头结点
    L = head;//L是头指针，指向头结点，头结点的next再指向第一个存放数据的结点
    if (L == nullptr)
        return false;
    L->next = nullptr;
    return true;
}

static bool isEmpty(LinkList L) {
    return ((L->next) == nullptr);
}

static bool ListInsert(LinkList &L, int i, Elemtype e) {
    if (i < 1||L == nullptr)
        return false;
    int j = 0;//j指的是p指向第几个结点
    LNode *p = L;
    while (p != nullptr && j < i - 1) {//从头结点(可看成第0个结点)开始遍历，直到j==i-1即p指向第i-1个结点
        p = p->next;
        j++;
    }
    if (p == nullptr)
        return false;
    InsertNextNode(p, e);
    return true;
}

static bool InsertNextNode(LNode *p, Elemtype e) {
    LNode *q = (LNode *) malloc(sizeof(LNode));
    if (q == nullptr)
        return false;
    q->data = e;
    q->next = p->next;
    p->next = q;
    return true;
}

static bool InsertPriorNode(LNode *p, Elemtype e) {
    LNode *q = (LNode *) malloc(sizeof(LNode));
    if (q == nullptr)
        return false;
    q->next = p->next;
    p->next = q;
    q->data = p->data;
    p->data = e;
    return true;
}

static bool ListDelete(LinkList &L, int i, Elemtype &e) {
    if (i < 1||L == nullptr)
        return false;
    int j = 0;//j指的是p指向第几个结点
    LNode *p = L;
    while (p != nullptr && j < i) {//从头结点(可看成第0个结点)开始遍历，直到j==i即p指向第i个结点
        p = p->next;
        j++;
    }
    if (p == nullptr)
        return false;
    if (p->next == nullptr) {
        DeleteNodeMethod2(L, p);
    } else {
        DeleteNodeMethod1(p);
    }

    return true;
}

static bool DeleteNodeMethod1(LNode *p) {//这种删除结点的方法有局限性，即，
    // 当p为最后一个结点时，q是nullptr，访问其data和next时会报空指针错误
    //但是时间复杂度为O(1)，而下面那种时间复杂度为O(n)
    if (p == nullptr)
        return false;
    LNode *q = p->next;
    p->data = q->data;
    p->next = q->next;
    free(q);
    return true;
}

static bool DeleteNodeMethod2(LinkList &L, LNode *p) {//这种删除结点的方法虽然可以应付删除最后一个结点，
    //但是时间复杂度是O(n)，上面那种时间复杂度是O(1)
    if (L == nullptr || p == nullptr)
        return false;
    int j = 0;
    LNode *q = L;
    while (q != nullptr && (q->next) != p) {//从头结点(可看成第0个结点)
        // 开始遍历，直到q成为p的前驱结点
        q = q->next;
        j++;
    }
    q->next = p->next;
    free(p);
    return true;
}

static bool GetElem(LinkList L, int i, LNode *&p) {
    if (i < 0||L == nullptr)
        return false;
    int j = 0;
    LNode *q = L;
    while (q != nullptr && j < i) {
        q = q->next;
        j++;
    }
    if (q == nullptr)
        return false;
    p = q;
    return true;
}

static bool LocateElem(LinkList L, Elemtype e, LNode *&p) {
    if(L == nullptr)
        return false;
    LNode *q = L->next;
    while (q->data != e && q != nullptr) {
        q = q->next;
    }
    if (q == nullptr)
        return false;
    p = q;
    return true;

}

static bool Length(LinkList L, int &i) {
    if (L == nullptr)
        return false;
    int j = 0;
    LNode *p = L;
    while (p != nullptr) {
        p = p->next;
        j++;
    }
    i = j;
    return true;
}

static bool ListTailInsert(LinkList &L) {
    L = (LNode *) malloc(sizeof(LNode));
    if (L == nullptr)
        return false;
    L->next = nullptr;
    LNode *p = L;
    Elemtype x;
    while (scanf("%d", &x)) {
        LNode *q = (LNode *) malloc(sizeof(LNode));
        if (q == nullptr)
            return false;
        q->data = x;
        q->next = p->next;
        p->next = q;
        p = q;
    }
    return true;
}

static bool ListHeadInsert(LinkList &L) {
    L = (LNode *) malloc(sizeof(LNode));
    if (L == nullptr)
        return false;
    L->next = nullptr;
    Elemtype x;
    while (scanf("%d", &x)) {
        LNode *p = (LNode *) malloc(sizeof(LNode));
        if (p == nullptr)
            return false;
        p->data = x;
        p->next = L->next;
        L->next = p;
    }
    return true;
}

int main() {

}