//
// Created by 21182 on 2021/9/5.
//

//找到后序线索二叉树的前驱结点

#define ElemType int

typedef struct ThreadNode {
    ElemType data;
    struct ThreadNode *lchild, *rchild,;
    int ltag = 0, rtag = 0;
} ThreadNode, *ThreadTree;

ThreadNode* Pre(ThreadNode* p){
    if(p->ltag==1)
        return p->lchild;
    if(p->rtag==0)
        return p->rchild;
    return p->lchild;
}