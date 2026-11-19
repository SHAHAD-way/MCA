#include <stdio.h>
#define MAX 100

int queue[MAX], front = -1, rear = -1;

void enqueue(int value) {
    if (rear == MAX - 1) { printf("Queue overflow.\n"); return; }
    if (front == -1) front = 0;
    queue[++rear] = value;
    printf("Inserted %d.\n", value);
}
void dequeue(void) {
    if (front == -1 || front > rear) { printf("Queue underflow.\n"); front = rear = -1; }
    else {
        printf("Deleted element: %d\n", queue[front++]);
        if (front > rear) front = rear = -1;
    }
}
void display(void) {
    int i;
    if (front == -1) { printf("Queue is empty.\n"); return; }
    printf("Queue: ");
    for (i = front; i <= rear; i++) printf("%d ", queue[i]);
    printf("\n");
}
int main(void) {
    int choice, value;
    do {
        printf("\n1.Enqueue  2.Dequeue  3.Display  4.Exit\nEnter choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: printf("Enter value: "); scanf("%d", &value); enqueue(value); break;
            case 2: dequeue(); break;
            case 3: display(); break;
            case 4: break;
            default: printf("Invalid choice.\n");
        }
    } while (choice != 4);
    return 0;
}
