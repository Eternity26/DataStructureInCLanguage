//
// Created by 21182 on 2021/9/17.
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
    VertexNode *vertexes[MAXSIZE];
    int vertexnum, edgenum;
} AdjacencyList;

int FirstNeighbour(AdjacencyList graph, int x);

int NextNeighBour(AdjacencyList graph, int x, int y);

void DFS(AdjacencyList graph, int x, bool isVisited[]);

void DFSAll(AdjacencyList graph, int x) {
    bool isVisited[graph.vertexnum];
    for (int i = 0; i < graph.vertexnum; i++)
        isVisited[i] = false;
    DFS(graph, x, isVisited);
    for (int j = 0; j < graph.vertexnum; j++) {
        if (!isVisited[j])
            DFS(graph, j, isVisited);
    }
}

void DFS(AdjacencyList graph, int x, bool isVisited[]) {
    //TODO: visit graph.vertexes[x]
    isVisited[x] = true;
    for (int i = FirstNeighbour(graph, x); i != -1; i = NextNeighBour(graph, x, i)) {
        if (!isVisited[i])
            DFS(graph, i, isVisited);
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