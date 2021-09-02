//
// Created by 21182 on 2021/9/2.
//

#define Elemtype int
#define MAXSIZE 100

typedef struct{
    Elemtype data;
    bool isEmpty;
}TreeNode;

int main(){
    TreeNode tree[MAXSIZE];
    for(int i = 0;i < MAXSIZE;i++){
        tree[i].isEmpty = true;
    }
}

