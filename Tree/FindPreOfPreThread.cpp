//
// Created by 21182 on 2021/9/5.
//

//查找先序线索二叉树(用三叉链表实现)的某一结点的前驱

#define ElemType int

typedef struct ThreadNode {
    ElemType data;
    struct ThreadNode *lchild, *rchild, *parent;
    int ltag = 0, rtag = 0;
} ThreadNode, *ThreadTree;

ThreadNode *LastOfPreOrder(ThreadNode *q);

ThreadNode *Pre(ThreadNode *p) {
    if (p->ltag == 1)/*如果p的ltag为1，即p没有左孩子，已被线索化，
        那么p的lchild就是线索，指向前序前驱*/
        return p->lchild;
    ThreadNode *par = p->parent;
    /*
     * 如果p未被线索化，那么根据前序遍历的根左右原则，p的左右子树都不能找到p的前驱
     * 这时如果我们用三叉链表实现这个前序线索二叉树，那么我们根据parent指针可以找到p的父结点
     * 第一种情况：p没有父结点，即p为根结点，此时p没有前序前驱
     * 第二种情况：p的父结点只有右孩子，右孩子为p，那么p的前序前驱就是父结点
     * 第三种情况：p的父结点只有左孩子或既有左孩子又有右孩子，左孩子为p，那么p的前序前驱就是父结点
     * 第四种情况：p的父结点既有左孩子又有右孩子，右孩子为p，那么p的前序前驱是p的父结点的左子树中最后一个被访问的结点
     */
    if (par == nullptr)
        return nullptr;
    if (par->ltag == 0 && p == par->lchild)
        return par;
    if (par->ltag == 1 && par->rtag == 0 && p == par->rchild)
        return par;
    if (par->ltag == 0 && par->rtag == 0 && p == par->lchild)
        return LastOfPreOrder(par->lchild);
}

ThreadNode *LastOfPreOrder(ThreadNode *q) {//找到以q为根的前序线索二叉树中最后一个被访问的结点
    /*
     * 方法：从根结点优先往右下走，如果右下没路，就往左下走，如果左下走的过程中又发现右下有路，就再往右下走，
     * 走到叶子结点为止
     */
    while (q->rtag == 0 || q->ltag == 0) {
        if (q->ltag == 0 && q->rtag == 1)
            q = q->lchild;
        else
            q = q->rchild;
    }
    return q;
}