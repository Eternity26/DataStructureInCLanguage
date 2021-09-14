//
// Created by 21182 on 2021/9/11.
//

//有向图的邻接矩阵法实现

#define Elemtype int
#define MAXSIZE 100

#include "stdio.h"

typedef struct {
    Elemtype Vertexes[MAXSIZE];
    int path[MAXSIZE][MAXSIZE];
    int vertexnum, edgenum;
} AdjacencyMatrix;

int Adjacent(AdjacencyMatrix graph, int x, int y) {
    return graph.path[x],[y];
}

void Neighbours(AdjacencyMatrix graph, int x) {
    for (int i = 0; i < graph.vertexnum; i++) {
        if (graph[x][i])
            printf("%d", i);
        if (graph[i][x])
            printf("%d", i);
    }
}

void InsertVertex(AdjacencyMatrix &graph, Elemtype x) {
    graph.Vertexes[graph.vertexnum] = x;
    graph.vertexnum++;
}

void DeleteVertex(AdjacencyMatrix &graph, int x) {
    graph.Vertexes[x] = 0;
    for (int i = 0; i < graph.vertexnum; i++) {
        graph.path[i][x] = 0;
        graph.path[x][i] = 0;
    }
}