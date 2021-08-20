//
// Created by __new__ on 2021/8/18.
//
#include "stdlib.h"
#include "stdio.h"

#define ElemType int
#define INITSIZE 10


typedef struct {
    ElemType *data;
    int length;
    int MAXSIZE;
} SqList;

static void InitList(SqList &L);

static void DestroyList(SqList &L);

static bool ListInsert(SqList &L, int i, ElemType e);

static bool ListDelete(SqList &L, int i);

static bool GetElem(SqList L, int i, ElemType &e);

static bool LocateElem(SqList L, ElemType e, int &n);

static void PrintList(SqList L);

static void InitList(SqList &L) {
    L.data = (ElemType *) malloc(sizeof(ElemType) * INITSIZE);
    L.length = 0;
    L.MAXSIZE = INITSIZE;
}

static void DestroyList(SqList &L) {
    free(L.data);
    L.data = nullptr;
    L.length = 0;
    L.MAXSIZE = 0;
}

static bool ListInsert(SqList &L, int i, ElemType e) {
    if (i < 1 || i > L.length + 1) {
        return false;
    }
    if (L.length == L.MAXSIZE) {
        ElemType *newData = (ElemType *) malloc(sizeof(ElemType) * (L.MAXSIZE + 1));
        for (int k = 0; k < L.MAXSIZE; k++) {
            newData[k] = L.data[k];
        }
        free(L.data);
        L.data = newData;
        L.MAXSIZE++;
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
    return true;
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

int main(){

}