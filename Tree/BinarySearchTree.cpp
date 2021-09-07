//
// Created by 21182 on 2021/9/7.
//

#define Elemtype int

#include "stdlib.h"

typedef struct BSTNode {
    Elemtype key;
    BSTNode *lchild, *rchild;
} BSTNode, *BinarySearchTree;

bool BST_Search(Elemtype e, BinarySearchTree tree) {
    if (tree == nullptr)
        return false;
    if (e == tree->key)
        return true;
    if (e > tree->key)
        return BST_Search(e, tree->rchild);
    if (e < tree->key)
        return BST_Search(e, tree->lchild);
}

bool BST_Insert(Elemtype data, BinarySearchTree &tree) {
    if (tree == nullptr) {
        tree = (BSTNode *) malloc(sizeof(BSTNode));
        tree->lchild = nullptr;
        tree->rchild = nullptr;
        tree->key = data;
        return true;
    }
    if (data == tree->key)
        return false;
    if (data < tree->key)
        return BST_Insert(data, tree->lchild);
    if (data > tree->key)
        return BST_Insert(data, tree->rchild);
}

void BST_Init(Elemtype data[], int len, BinarySearchTree &tree) {
    tree = nullptr;
    for (int i = 0; i < len; i++) {
        BST_Insert(data[i], tree);
    }
}