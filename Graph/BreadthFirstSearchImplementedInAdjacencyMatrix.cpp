//
// Created by 21182 on 2021/9/16.
//

#define Elemtype int
#define MAXSIZE 100
#define QueueElemtype int

#include "stdio.h"
#include ""
#include "LinkStackWithHeadnode.h"

typedef struct {
    Elemtype Vertexes[MAXSIZE];
    bool isEmpty[MAXSIZE];
    int path[MAXSIZE][MAXSIZE];
    int vertexnum, edgenum;
} AdjacencyMatrix;

LiQueue *q;

int FirstNeighbour(AdjacencyMatrix graph, int x);

int NextNeighBour(AdjacencyMatrix graph, int x, int y);

void BFS(AdjacencyMatrix graph, int x, LiQueue *&q, bool isVisited[]);

void BFSAll(AdjacencyMatrix graph, int x) {
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

void BFS(AdjacencyMatrix graph, int x, LiQueue *&q, bool isVisited[]) {
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

int FirstNeighbour(AdjacencyMatrix graph, int x) {
    for (int i = 0; i < graph.vertexnum; i++) {
        if (graph.path[x][i])
            return i;
    }
    return -1;
}

int NextNeighBour(AdjacencyMatrix graph, int x, int y) {
    for (int i = y + 1; i < graph.vertexnum; i++) {
        if (graph.path[x][i])
            return i;
    }
    return -1;
}