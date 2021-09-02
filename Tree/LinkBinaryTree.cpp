//
// Created by 21182 on 2021/9/2.
//

#define ElemType int

#include "stdlib.h"

typedef struct BiTNode {
    ElemType data;
    struct BiTNode *lchild, *rchild;
} BiTNode, *BiTree;

int main() {
    BiTNode *root = (BiTNode *) malloc(sizeof(BiTNode));
    root->data = 1;
    root->lchild = nullptr;
    root->rchild = nullptr;
}