#include <stdio.h>

void printAdjacencyMatrix(int graph[][4], int size, const char* graphName) {
    printf("%s의 인접 행렬\n", graphName);
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", graph[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    // G1의 인접 행렬
    int G1[4][4] = {
        {0, 1, 0, 1},
        {1, 0, 1, 1},
        {0, 1, 0, 1},
        {1, 1, 1, 0}
    };

    // G2의 인접 행렬
    int G2[3][3] = {
        {0, 1, 1},
        {1, 0, 1},
        {1, 1, 0}
    };

    // G3의 인접 행렬
    int G3[4][4] = {
        {0, 1, 0, 1},
        {0, 0, 1, 1},
        {0, 0,0, 1},
        {0, 0, 0, 0}
    };

    // G4의 인접 행렬
    int G4[3][3] = {
        {0, 1, 1},
        {1, 0, 1},
        {0, 0, 0}
    };

    printAdjacencyMatrix(G1, 4, "G1");
    printAdjacencyMatrix(G2, 3, "G2");
    printAdjacencyMatrix(G3, 4, "G3");
    printAdjacencyMatrix(G4, 3, "G4");

    return 0;
}
