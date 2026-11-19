#include <stdio.h>
#define MAX 100

int main(void) {
    int a[MAX], n = 0, choice, pos, value, i;

    do {
        printf("\n--- ARRAY MENU ---\n");
        printf("1. Create array\n2. Insert element\n3. Delete element\n4. Display array\n5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter number of elements (0-%d): ", MAX);
                scanf("%d", &n);
                if (n < 0 || n > MAX) {
                    printf("Invalid size.\n");
                    n = 0;
                    break;
                }
                printf("Enter %d elements:\n", n);
                for (i = 0; i < n; i++) scanf("%d", &a[i]);
                break;

            case 2:
                if (n == MAX) {
                    printf("Array is full.\n");
                    break;
                }
                printf("Enter position (1 to %d): ", n + 1);
                scanf("%d", &pos);
                if (pos < 1 || pos > n + 1) {
                    printf("Invalid position.\n");
                    break;
                }
                printf("Enter value: ");
                scanf("%d", &value);
                for (i = n; i >= pos; i--) a[i] = a[i - 1];
                a[pos - 1] = value;
                n++;
                printf("Element inserted.\n");
                break;

            case 3:
                if (n == 0) {
                    printf("Array is empty.\n");
                    break;
                }
                printf("Enter position to delete (1 to %d): ", n);
                scanf("%d", &pos);
                if (pos < 1 || pos > n) {
                    printf("Invalid position.\n");
                    break;
                }
                for (i = pos - 1; i < n - 1; i++) a[i] = a[i + 1];
                n--;
                printf("Element deleted.\n");
                break;

            case 4:
                if (n == 0) printf("Array is empty.\n");
                else {
                    printf("Array: ");
                    for (i = 0; i < n; i++) printf("%d ", a[i]);
                    printf("\n");
                }
                break;

            case 5:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 5);

    return 0;
}
