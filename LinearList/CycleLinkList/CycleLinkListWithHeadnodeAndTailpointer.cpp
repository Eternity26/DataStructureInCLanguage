//
// Created by 21182 on 2021/8/20.
//

#include "stdlib.h"
#include "stdio.h"

#define Elemtype int


typedef struct LNode {
    Elemtype data;
    struct LNode *next;
} LNode, *LinkList;


static bool InitList(LinkList &L);

static bool IsEmpty(LinkList L);

static bool IsTail(LinkList L, LNode *p);

static bool IsHead(LinkList L, LNode *p);

static bool InsertNextNode(LinkList &L, LNode *p, LNode *q);

static bool DeleteNextNode(LinkList &L, LNode *p);


static bool InitList(LinkList &L) {
    L = (LNode *) malloc(sizeof(LNode));
    if (L == nullptr)
        return false;
    L->next = L;//尾指针，便于对表头和表尾进行操作，设立原因如下：
    //如果只有头指针，那么到达表尾就需要全部遍历O(n)
    //如果设立了尾指针L指向表尾，那么要到达表头的话，表尾的next就是表头，只需要O(1)
    return true;
}

static bool IsEmpty(LinkList L) {
    return (L->next == L);
}

static bool IsTail(LinkList L, LNode *p) {
    return (p == L);
}

static bool IsHead(LinkList L, LNode *p) {
    return (L->next == p);
}

static bool InsertNextNode(LinkList &L, LNode *p, LNode *q) {
    if (L == nullptr || p == nullptr || q == nullptr)
        return false;
    q->next = p->next;
    q = p->next;
    if (p == L)//如果在尾指针之后的位置插入结点，则让尾指针指向新插入的结点
        L = p;
    return true;
}

static bool DeleteNextNode(LinkList &L, LNode *p) {
    if (L == nullptr || p == nullptr)
        return false;
    if (p == L) {//如果删除尾指针指向的结点，
        while (L->next != p)//则从尾指针开始遍历，直到尾指针指向原来尾指针的前一个位置
            L = L->next;
    }
    LNode *q = p->next;
    p->data = q->data;
    p->next = q->next;
    free(q);
    return true;
}

int main() {

}