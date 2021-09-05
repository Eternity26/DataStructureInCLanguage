//
// Created by 21182 on 2021/9/5.
//

//查找先序线索二叉树的某一结点的后继

#define ElemType int

typedef struct ThreadNode {
    ElemType data;
    struct ThreadNode *lchild, *rchild;
    int ltag = 0, rtag = 0;
} ThreadNode, *ThreadTree;

ThreadNode* Next(ThreadNode* p){
    if(p->rtag==1)/*如果p的rtag为1，即p没有右孩子，已被线索化，
        那么p的rchild就是线索，指向前序后继*/
        return p->rchild;
    else{
        if(p->ltag==0)/*如果p有右孩子，那么
 *     如果p也有左孩子，根据前序遍历根左右的原则，下一步应该访问p的左子树的根，即p的左孩子
 *     如果p没有左孩子，那么只能访问右孩子
 *     e.g.如果p有一个右孩子和一个左孩子，且左孩子又有一个右孩子和一个左孩子，
 *     则p及其右子树和左子树的结构为：根[p](根[p的左孩子] 左[p的左孩子的左孩子] 右[p的左孩子的右孩子])右[p的右孩子]
 *     ，[]内表示左边的字指代的内容，可见此时p的左孩子在p后先被访问*/
            return p->lchild;
        else
            return p->rchild;
    }
}
