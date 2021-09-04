//
// Created by 21182 on 2021/9/4.
//

//后序线索化
#define ElemType int

typedef struct ThreadNode {
    ElemType data;
    struct ThreadNode *lchild, *rchild;
    int ltag = 0, rtag = 0;
} ThreadNode, *ThreadTree;

ThreadNode *pre;//记录前驱结点

void CreatePostThread(ThreadTree tree);

void PostThread(ThreadTree tree);

void visit(ThreadTree tree);

void CreatePostThread(ThreadTree tree) {
    pre = nullptr;
    if (tree != nullptr) {
        PostThread(tree);
        if (pre->rchild == nullptr)//处理最后一个结点
            pre->rtag = 1;
    }
}

void PostThread(ThreadTree tree) {
    if (tree != nullptr) {
        PostThread(tree->lchild);
        PostThread(tree->rchild);
        visit(tree);
    }
}

void visit(ThreadTree tree) {
    if (tree->lchild == nullptr) {
        tree->lchild = pre;
        tree->ltag = 1;
    }
    if (pre != nullptr && pre->rchild == nullptr) {
        pre->rchild = tree;
        pre->rtag = 1;
    }
    pre = tree;

}