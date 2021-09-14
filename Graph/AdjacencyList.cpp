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
    ArcNode *FirstEdge;
} VertexNode;

typedef struct {
    VertexNode vertexes[MAXSIZE];
    int vertexnum, edgenum;
} AdjacencyMatrix;