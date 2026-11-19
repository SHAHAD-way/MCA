#include <stdio.h>
#define MAX 100

int main(void) {
    int a[MAX], b[MAX], c[2 * MAX];
    int n1, n2, i, j, temp, total;

    printf("Enter size of first array: ");
    scanf("%d", &n1);
    if (n1 < 0 || n1 > MAX) return printf("Invalid size.\n"), 1;
    printf("Enter first array elements:\n");
    for (i = 0; i < n1; i++) scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);
    if (n2 < 0 || n2 > MAX) return printf("Invalid size.\n"), 1;
    printf("Enter second array elements:\n");
    for (i = 0; i < n2; i++) scanf("%d", &b[i]);

    for (i = 0; i < n1; i++) c[i] = a[i];
    for (i = 0; i < n2; i++) c[n1 + i] = b[i];
    total = n1 + n2;

    for (i = 0; i < total - 1; i++) {
        for (j = 0; j < total - i - 1; j++) {
            if (c[j] > c[j + 1]) {
                temp = c[j];
                c[j] = c[j + 1];
                c[j + 1] = temp;
            }
        }
    }

    printf("Merged and sorted array: ");
    for (i = 0; i < total; i++) printf("%d ", c[i]);
    printf("\n");
    return 0;
}
