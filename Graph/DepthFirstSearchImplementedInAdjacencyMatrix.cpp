//
// Created by 21182 on 2021/9/17.
//

#define Elemtype int
#define MAXSIZE 100

typedef struct {
    Elemtype Vertexes[MAXSIZE];
    bool isEmpty[MAXSIZE];
    int path[MAXSIZE][MAXSIZE];
    int vertexnum, edgenum;
} AdjacencyMatrix;

int FirstNeighbour(AdjacencyMatrix graph, int x);

int NextNeighBour(AdjacencyMatrix graph, int x, int y);

void DFS(AdjacencyMatrix graph, int x, bool isVisited[]);

void DFSAll(AdjacencyMatrix graph, int x) {
    bool isVisited[graph.vertexnum];
    for (int i = 0; i < graph.vertexnum; i++)
        isVisited[i] = false;
    DFS(graph, x, isVisited);
    for (int j = 0; j < graph.vertexnum; j++) {
        if (!isVisited[j])
            DFS(graph, j, isVisited);
    }
}

void DFS(AdjacencyMatrix graph, int x, bool isVisited[]) {
    //TODO: visit graph.vertexes[x]
    isVisited[x] = true;
    for (int i = FirstNeighbour(graph, x); i != -1; i = NextNeighBour(graph, x, i)) {
        if (!isVisited[i])
            DFS(graph, i, isVisited);
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