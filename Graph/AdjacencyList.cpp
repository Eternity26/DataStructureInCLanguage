//
// Created by 21182 on 2021/9/13.
//

#define Elemtype int
#define Weighttype int
#define MAXSIZE 100
#define INFINITY INT_MAX

#include "stdio.h"
#include "stdlib.h"

typedef struct ArcNode {
    int vertexlink;
    ArcNode *next;
    Weighttype weight;
} ArcNode;

typedef struct {
    Elemtype data;
    ArcNode *FirstArc;
} VertexNode;

typedef struct {
    VertexNode *vertexes[MAXSIZE];
    int vertexnum, edgenum;
} AdjacencyList;

bool Adjacent(VertexNode *x, ArcNode *y) {
    for (ArcNode *i = x->FirstArc; i != nullptr; i = i->next) {
        if (i == y)
            return true;
    }
    return false;
}

void Neighbours(VertexNode *x) {
    for (ArcNode *i = x->FirstArc; i != nullptr; i = i->next) {
        printf("%d", i->vertexlink);
    }
}

bool InsertVertex(AdjacencyList &graph, VertexNode x) {
    if (graph.vertexnum == MAXSIZE)
        return false;
    graph.vertexes[graph.vertexnum] = x;
    graph.vertexnum++;
    return true;
}

bool DeleteVertex(AdjacencyList &graph, int x) {
    if (graph.vertexes[x] == nullptr)
        return false;
    for (ArcNode *i = graph.vertexes[x]->FirstArc; graph.vertexes[x]->FirstArc != nullptr;) {
        graph.vertexes[x]->FirstArc = i->next;
        ArcNode *p = i;
        i = i->next;
        free(p);
    }
    int j = 0;
    for (VertexNode *k = graph.vertexes[j]; k != nullptr; j++) {
        for (ArcNode *l = k->FirstArc; l != nullptr; l = l->next) {
            if (l->vertexlink == x) {
                if (l->next == nullptr) {
                    free(l);
                }
                l->vertexlink = l->next->vertexlink;
                ArcNode *m = l->next;
                l->next = l->next->next;
                free(m);
            }
        }
    }
    return true;
}

void AddEdge(AdjacencyList &graph, int x, int y) {
    VertexNode *k = graph.vertexes[x];
    ArcNode *i = (ArcNode *) malloc(sizeof(ArcNode));
    i->vertexlink = y;
    i->next = nullptr;
    ArcNode *j;
    for (j = k->FirstArc; j->next != nullptr; j = j->next);
    j->next = i;
}

bool RemoveEdge(AdjacencyList &graph, int x, int y) {
    ArcNode *i;
    for (i = graph.vertexes[x]->FirstArc; i != nullptr; i = i->next) {
        if (i->vertexlink == y)
            break;
    }
    if (i == nullptr)
        return false;
    if (i->next == nullptr)
        i = nullptr;
    i->vertexlink = i->next->vertexlink;
    ArcNode *j = i->next;
    i->next = i->next->next;
    free(j);
    return true;
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

Weighttype Get_Arc_Value(AdjacencyList graph, int x, int y) {
    ArcNode *i;
    for (i = graph.vertexes[x]->FirstArc; i != nullptr && i->vertexlink != y; i = i->next);
    if (i == nullptr)
        return INFINITY;
    return i->weight;
}

bool Set_Arc_Value(AdjacencyList &graph, int x, int y, Weighttype w) {
    if (graph.vertexes[x] == nullptr)
        return false;
    ArcNode *i;
    for (i = graph.vertexes[x]->FirstArc; i != nullptr && i->vertexlink != y; i = i->next);
    if (i == nullptr)
        return false;
    i->weight = w;
    return true;
}