#include <stdio.h>
#define MAX 20

int graph[MAX][MAX], visited[MAX], n;

void dfs(int vertex) {
    int i;
    visited[vertex] = 1;
    printf("%d ", vertex);
    for (i = 0; i < n; i++) {
        if (graph[vertex][i] != 0 && !visited[i])
            dfs(i);
    }
}

int main(void) {
    int i, j, start;
    printf("Enter number of vertices (1-%d): ", MAX);
    scanf("%d", &n);
    if (n < 1 || n > MAX) { printf("Invalid number of vertices.\n"); return 1; }

    printf("Enter adjacency matrix (%d x %d):\n", n, n);
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &graph[i][j]);

    printf("Enter starting vertex (0 to %d): ", n - 1);
    scanf("%d", &start);
    if (start < 0 || start >= n) { printf("Invalid starting vertex.\n"); return 1; }

    for (i = 0; i < n; i++) visited[i] = 0;
    printf("DFS traversal: ");
    dfs(start);
    printf("\n");
    return 0;
}
