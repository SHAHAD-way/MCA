#include <stdio.h>
#define MAX 100

int parent[MAX], n;

void makeSet(void) {
    int i;
    for (i = 0; i < n; i++) parent[i] = i;
    printf("Disjoint sets created. Elements are 0 to %d.\n", n - 1);
}
int findSet(int x) {
    if (parent[x] != x) parent[x] = findSet(parent[x]); /* Path compression */
    return parent[x];
}
void unionSet(int a, int b) {
    int rootA = findSet(a), rootB = findSet(b);
    if (rootA == rootB) printf("Both elements are already in the same set.\n");
    else { parent[rootB] = rootA; printf("Sets merged.\n"); }
}
int valid(int x) { return x >= 0 && x < n; }

int main(void) {
    int choice, a, b;
    printf("Enter number of elements (1-%d): ", MAX);
    scanf("%d", &n);
    if (n < 1 || n > MAX) { printf("Invalid size.\n"); return 1; }
    makeSet();
    do {
        printf("\n1.Make Set (reset)  2.Find  3.Union  4.Display  5.Exit\nEnter choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: makeSet(); break;
            case 2:
                printf("Enter element: "); scanf("%d", &a);
                if (valid(a)) printf("Representative of %d is %d.\n", a, findSet(a));
                else printf("Invalid element.\n");
                break;
            case 3:
                printf("Enter two elements: "); scanf("%d%d", &a, &b);
                if (valid(a) && valid(b)) unionSet(a, b);
                else printf("Invalid element(s).\n");
                break;
            case 4:
                printf("Element : Representative\n");
                for (a = 0; a < n; a++) printf("%d : %d\n", a, findSet(a));
                break;
            case 5: break;
            default: printf("Invalid choice.\n");
        }
    } while (choice != 5);
    return 0;
}
