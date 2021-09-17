//
// Created by 21182 on 2021/9/16.
//

#define Elemtype int
#define MAXSIZE 100
#define QueueElemtype int

#include "stdio.h"
#include "stdlib.h"
#include "LinkStackWithHeadnode.h"

typedef struct ArcNode {
    int vertexlink;
    ArcNode *next;
} ArcNode;

typedef struct {
    Elemtype data;
    ArcNode *FirstArc;
} VertexNode;

typedef struct {
    VertexNode *vertexes[MAXSIZE];
    int vertexnum, edgenum;
} AdjacencyList;

LiQueue *q;

int FirstNeighbour(AdjacencyList graph, int x);

int NextNeighbour(AdjacencyList graph, int x, int y);

void BFS(AdjacencyList graph, int x, LiQueue *&q, bool isVisited[]);

void BFSAll(AdjacencyList graph, int x) {
    InitQueue(q);
    bool isVisited[graph.vertexnum];
    for (int i = 0; i < graph.vertexnum; i++)
        isVisited[i] = false;
    BFS(graph, x, q, isVisited);
    for (int j = 0; j < graph.vertexnum; j++) {
        if (!isVisited[j])
            BFS(graph, j, q, isVisited);
    }

}

void BFS(AdjacencyList graph, int x, LiQueue *&q, bool isVisited[]) {
    EnQueue(q, x);
    while (q->front != q->rear) {
        QueueElemtype j;
        DeQueue(q, j);
        //TODO: visit graph.vertexes[j]
        isVisited[j] = true;
        for (int k = FirstNeighbour(graph, j); k != -1; k = NextNeighBour(graph, j, k)) {
            EnQueue(q, k);
        }
    }
}

int FirstNeighbour(AdjacencyList graph, int x) {
    if (x < 0 || x > MAXSIZE - 1 || graph.vertexes[x] == nullptr || graph.vertexes[x]->FirstArc == nullptr)
        return -1;
    return graph.vertexes[x]->FirstArc->vertexlink;
}

int NextNeighbour(AdjacencyList graph, int x, int y) {
    if (x < 0 || x > graph.vertexnum - 1 || graph.vertexes[x] == nullptr || graph.vertexes[x]->FirstArc == nullptr ||
        y < 0 || y > graph.edgenum - 1)
        return -1;
    ArcNode *i = graph.vertexes[x]->FirstArc;
    for (; i != nullptr && i->vertexlink != y; i = i->next);
    if (i == nullptr || i->next == nullptr)
        return -1;
    return i->next->vertexlink;
}