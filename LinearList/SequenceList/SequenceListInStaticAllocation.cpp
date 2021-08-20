//
// Created by __new__ on 2021/8/18.
//
#include "stdlib.h"
#include "stdio.h"

#define ElemType int
#define MAXSIZE 10

typedef struct {
    ElemType data[MAXSIZE];
    int length;
} SqList;

static void InitList(SqList &L);

static void DestroyList(SqList &L);

static bool ListInsert(SqList &L, int i, ElemType e);

static bool ListDelete(SqList &L, int i);

static bool GetElem(SqList L, int i, ElemType &e);

static bool LocateElem(SqList L, ElemType e, int &n);

static void PrintList(SqList L);

static void InitList(SqList &L) {
    L.length = 0;
}

static bool ListInsert(SqList &L, int i, ElemType e) {
    if (i < 1 || i > L.length + 1 || L.length >= MAXSIZE) {
        return false;
    }
    for (int j = L.length; j >= i; j--) {
        L.data[j] = L.data[j - 1];
    }
    L.data[i - 1] = e;
    L.length++;
    return true;
}

static bool ListDelete(SqList &L, int i) {
    if (i < 1 || i > L.length || L.length <= 0) {
        return false;
    }
    for (int j = i - 1; j < L.length - 1; j++) {
        L.data[j] = L.data[j + 1];
    }
    L.data[L.length - 1] = 0;
    L.length--;
    return true;
}

static bool GetElem(SqList L, int i, ElemType &e) {
    e = L.data[i - 1];
    if (e) {
        return true;
    } else {
        return false;
    }
}

static bool LocateElem(SqList L, ElemType e, int &n) {
    for (int i = 0; i < L.length; i++) {
        if (L.data[i] == e) {
            n = i + 1;
            return true;
        }
    }
    return false;
}

static void PrintList(SqList L) {
    for (int i = 0; i < L.length; i++) {
        printf("%d ", L.data[i]);
    }
    printf("\n");
}

int main() {
    SqList list;
    InitList(list);
    ListInsert(list, 1, -1);
    int n;
    GetElem(list, 1, n);
    printf("%d\n", n);
    PrintList(list);
    for (int i = -100, j = 2; i < -91; i++) {
        ListInsert(list, j, i);
    }
    PrintList(list);
    ListDelete(list, 1);
    PrintList(list);
    ListDelete(list, 4);
    PrintList(list);
}