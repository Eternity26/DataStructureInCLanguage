//
// Created by 21182 on 2021/9/5.
//

//找到后序线索二叉树(用三叉链表实现)的后继结点

#define ElemType int

typedef struct ThreadNode {
    ElemType data;
    struct ThreadNode *lchild, *rchild, *parent;
    int ltag = 0, rtag = 0;
} ThreadNode, *ThreadTree;

ThreadNode *LastOfPostOrder(ThreadNode *q);

ThreadNode *Post(ThreadNode *p) {
    if (p->rtag == 1)
        return p->rchild;
    ThreadNode *par = p->parent;
    if (par == nullptr)
        return nullptr;
    if (par->rtag == 0 && par->rchild == p)
        return par;
    if (par->rtag == 1 && par->ltag == 0 && par->lchild == p)
        return par;
    if (par->rtag == 0 && par->ltag == 0 && par->lchild == p)
        return LastOfPostOrder(par->rchild);
}

ThreadNode *LastOfPostOrder(ThreadNode *q) {
    while (q->ltag == 0 || q->rtag == 0) {
        if (q->ltag == 1 && q->rtag == 0)
            q = q->rchild;
        else
            q = q->lchild;
    }
}