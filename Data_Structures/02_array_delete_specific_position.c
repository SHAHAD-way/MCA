#include <stdio.h>
#define MAX 100

int main(void) {
    int a[MAX], n, pos, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    if (n < 1 || n > MAX) {
        printf("Invalid size.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);

    printf("Enter position to delete (1 to %d): ", n);
    scanf("%d", &pos);
    if (pos < 1 || pos > n) {
        printf("Invalid position.\n");
        return 1;
    }

    for (i = pos - 1; i < n - 1; i++) a[i] = a[i + 1];
    n--;

    printf("Array after deletion: ");
    for (i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}
