#include <stdio.h>
#include <stdlib.h>

struct Node { int data; struct Node *next; };
struct Node *top = NULL;

void push(int value) {
    struct Node *newNode = malloc(sizeof(struct Node));
    if (!newNode) { printf("Memory allocation failed.\n"); return; }
    newNode->data = value;
    newNode->next = top;
    top = newNode;
    printf("Pushed %d.\n", value);
}
void pop(void) {
    struct Node *temp;
    if (top == NULL) { printf("Stack underflow.\n"); return; }
    temp = top;
    printf("Popped element: %d\n", temp->data);
    top = top->next;
    free(temp);
}
void display(void) {
    struct Node *temp = top;
    if (temp == NULL) { printf("Stack is empty.\n"); return; }
    printf("Stack (top to bottom): ");
    while (temp != NULL) { printf("%d ", temp->data); temp = temp->next; }
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
            case 4: break;
            default: printf("Invalid choice.\n");
        }
    } while (choice != 4);
    while (top != NULL) { struct Node *temp = top; top = top->next; free(temp); }
    return 0;
}
