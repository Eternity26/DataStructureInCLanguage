//
// Created by 21182 on 2021/9/5.
//

//查找中序线索二叉树的某一结点的后继

#define ElemType int

typedef struct ThreadNode {
    ElemType data;
    struct ThreadNode *lchild, *rchild;
    int ltag = 0, rtag = 0;
} ThreadNode, *ThreadTree;

ThreadNode *FirstOfPreOrder(ThreadNode *q);

ThreadNode *Next(ThreadNode *p) {//求出p的中序后继
    if (p->rtag == 1) {/*如果p的rtag为1，即p没有右孩子，已被线索化，
        那么p的rchild就是线索，指向中序后继*/
        return p->rchild;
    } else/*如果p的rtag为0，即p有右孩子，
 *      那么根据中序遍历左根右的原则，需要找到p的右子树中最左下的结点，
 *      也就是p的右子树中最先被访问的结点，也就是p的中序后继
 *      e.g.假设p的右孩子还有一个左孩子，那么p及其右子树的结构为
 *      根[p](左[p的右孩子的左孩子] 根[p的右孩子])，[]内表示左边的字指代的内容，
 *      可见p的右孩子的左孩子在p之后先被访问*/
        return FirstOfPreOrder(p->rchild);
}

ThreadNode *FirstOfPreOrder(ThreadNode *q) {//找到根为q的树中最左下的结点，即中序遍历时最先被访问的结点
    while (q->ltag == 0)
        q = q->lchild;
    return q;

}

void TraverseUsingFindingPost(ThreadTree tree) {//用找中序后继的方法遍历中序线索二叉树，时间复杂度O(1)
    for (ThreadNode *node = FirstOfPreOrder(tree); node != nullptr; node = Next(node)) {
        //TODO: Visit()
    }
}