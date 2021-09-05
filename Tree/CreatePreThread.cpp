//
// Created by 21182 on 2021/9/4.
//

//前序线索化
#define ElemType int

typedef struct ThreadNode {
    ElemType data;
    struct ThreadNode *lchild, *rchild;
    int ltag = 0, rtag = 0;
} ThreadNode, *ThreadTree;

ThreadNode *pre;//记录前驱结点

void CreatePreThread(ThreadTree tree);

void PreThread(ThreadTree tree);

void visit(ThreadTree tree);

void CreatePreThread(ThreadTree tree) {
    pre = nullptr;
    if (tree != nullptr) {
        PreThread(tree);
        if (pre->rchild == nullptr)//处理最后一个结点
            pre->rtag = 1;
    }
}

void PreThread(ThreadTree tree) {
    if (tree != nullptr) {
        visit(tree);
        if(tree->ltag==0)/*这里if判断一定要判断lchild是不是线索，如果不加判断ltag，
        那么假设访问的是原来没有左孩子的结点，如果已经访问，把lchild设置为了前驱结点，那么Thread函数里访问lchild
        又会回到前驱结点，会出现无限循环的情况，这是前序线索化特有的问题！*/
        PreThread(tree->lchild);
        PreThread(tree->rchild);
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