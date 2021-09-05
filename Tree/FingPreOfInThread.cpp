//
// Created by 21182 on 2021/9/5.
//

//查找中序线索二叉树的某一结点的的前驱

#define ElemType int

typedef struct ThreadNode {
    ElemType data;
    struct ThreadNode *lchild, *rchild;
    int ltag = 0, rtag = 0;
} ThreadNode, *ThreadTree;

ThreadNode *LastOfPreOrder(ThreadNode *q);

ThreadNode *Pre(ThreadNode *p) {//求出p的中序前驱
    if (p->ltag == 1) {/*如果p的ltag为1，即p没有左孩子，已被线索化，
        那么p的lchild就是线索，指向中序前驱*/
        return p->lchild;
    } else/*如果p的ltag为0，即p有左孩子，
 *      那么根据中序遍历左根右的原则，需要找到p的左子树中最右下的结点，
 *      也就是p的左子树中最后被访问的结点，也就是p的中序前驱
 *      e.g.假设p的左孩子还有一个右孩子，那么p及其左子树的结构为
 *      (根[p的左孩子] 右[p的左孩子的右孩子])根[p]，[]内表示左边的字指代的内容，
 *      可见p的左孩子的右孩子在p之前最后被访问*/
        return LastOfPreOrder(p->lchild);
}

ThreadNode *LastOfPreOrder(ThreadNode *q) {//找到根为q的树中最右下的结点，即中序遍历时最先后访问的结点
    while (q->rtag == 0)
        q = q->rchild;
    return q;

}

void TraverseUsingFindingPre(ThreadTree tree) {//用找中序前驱的方法逆向遍历中序线索二叉树，时间复杂度O(1)
    for (ThreadNode *node = LastOfPreOrder(tree); node != nullptr; node = Pre(node)) {
        //TODO: Visit()
    }
}