//
// Created by 21182 on 2021/9/3.
//

#define ElemType int

#include "stdlib.h"

typedef struct BiTNode {
    ElemType data;
    struct BiTNode *lchild, *rchild;
} BiTNode, *BiTree;

void PreOrderTraverse(BiTNode *node) {
    if (node == nullptr)
        return;
    //TODO: 处理结点
    PreOrderTraverse(node->lchild);
    PreOrderTraverse(node->rchild);
}
