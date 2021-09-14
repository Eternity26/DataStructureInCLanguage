//
// Created by 21182 on 2021/9/13.
//

#define Elemtype int
#define MAXSIZE 100

typedef struct ArcNode {
    int vertexlink;
    ArcNode *next;
} ArcNode;

typedef struct {
    Elemtype data;
    ArcNode *FirstArc;
} VertexNode;

typedef struct {
    VertexNode vertexes[MAXSIZE];
    int vertexnum, edgenum;
} AdjacencyList;

bool Adjacent(VertexNode *x, ArcNode *y) {
    for (ArcNode *i = x->FirstArc; i != nullptr; i = i->next) {
        if (i == y)
            return true;
    }
    return false;
}