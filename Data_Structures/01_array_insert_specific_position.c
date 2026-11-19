#include <stdio.h>
#define MAX 100

int main(void) {
    int a[MAX], n, pos, value, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    if (n < 0 || n >= MAX) {
        printf("Invalid size. Maximum allowed is %d.\n", MAX - 1);
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);

    printf("Enter position to insert (1 to %d): ", n + 1);
    scanf("%d", &pos);
    if (pos < 1 || pos > n + 1) {
        printf("Invalid position.\n");
        return 1;
    }

    printf("Enter element to insert: ");
    scanf("%d", &value);

    for (i = n; i >= pos; i--) a[i] = a[i - 1];
    a[pos - 1] = value;
    n++;

    printf("Array after insertion: ");
    for (i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}
