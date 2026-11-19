#include <stdio.h>
#define MAX 100

int stack[MAX], top = -1;

void push(int value) {
    if (top == MAX - 1) printf("Stack overflow.\n");
    else { stack[++top] = value; printf("Pushed %d.\n", value); }
}
void pop(void) {
    if (top == -1) printf("Stack underflow.\n");
    else printf("Popped element: %d\n", stack[top--]);
}
void display(void) {
    int i;
    if (top == -1) { printf("Stack is empty.\n"); return; }
    printf("Stack (top to bottom): ");
    for (i = top; i >= 0; i--) printf("%d ", stack[i]);
    printf("\n");
}
int main(void) {
    int choice, value;
    do {
        printf("\n1.Push  2.Pop  3.Display  4.Exit\nEnter choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: printf("Enter value: "); scanf("%d", &value); push(value); break;
            case 2: pop(); break;
            case 3: display(); break;
            case 4: printf("Exiting.\n"); break;
            default: printf("Invalid choice.\n");
        }
    } while (choice != 4);
    return 0;
}
