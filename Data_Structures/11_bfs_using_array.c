#include <stdio.h>
#define MAX 20

int main(void) {
    int graph[MAX][MAX], visited[MAX] = {0}, queue[MAX];
    int n, start, i, j, front = 0, rear = -1, current;

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

    visited[start] = 1;
    queue[++rear] = start;
    printf("BFS traversal: ");
    while (front <= rear) {
        current = queue[front++];
        printf("%d ", current);
        for (i = 0; i < n; i++) {
            if (graph[current][i] != 0 && !visited[i]) {
                visited[i] = 1;
                queue[++rear] = i;
            }
        }
    }
    printf("\n");
    return 0;
}
