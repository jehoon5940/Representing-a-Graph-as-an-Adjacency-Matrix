#include <stdio.h>
#include "adjMatrix.h"

int main(void) {
    int i;
    graphType* G1 = (graphType*)malloc(sizeof(graphType));
    graphType* G2 = (graphType*)malloc(sizeof(graphType));
    graphType* G3 = (graphType*)malloc(sizeof(graphType));
    graphType* G4 = (graphType*)malloc(sizeof(graphType));

    // G1 구성 : 정점 u에 대한 간선 (u,v)의 삽입순서는 v가 큰 것부터.
    createGraph(G1);
    for (i = 0; i < 4; i++)
        insertVertex(G1, i);  // G1의 정점 0-3 삽입
    insertEdge(G1, 0, 3);
    insertEdge(G1, 0, 2);
    insertEdge(G1, 0, 1);
    insertEdge(G1, 1, 3);
    insertEdge(G1, 1, 2);
    insertEdge(G1, 1, 0);
    insertEdge(G1, 2, 3);
    insertEdge(G1, 2, 1);
    insertEdge(G1, 3, 2);
    insertEdge(G1, 3, 1);
    insertEdge(G1, 3, 0);

    // G2 구성 : 정점 u에 대한 간선 (u,v)의 삽입순서는 v가 큰 것부터.
    createGraph(G2);
    for (i = 0; i < 3; i++)
        insertVertex(G2, i);  // G2의 정점 0-2 삽입
    insertEdge(G2, 0, 1);
    insertEdge(G2, 0, 2);
    insertEdge(G2, 1, 0);
    insertEdge(G2, 1, 2);
    insertEdge(G2, 2, 0);
    insertEdge(G2, 2, 1);
}
