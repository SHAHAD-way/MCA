#include <stdio.h>
#define MAX 5

int queue[MAX], front = -1, rear = -1;

void enqueue(int value) {
    if ((rear + 1) % MAX == front) { printf("Circular queue is full.\n"); return; }
    if (front == -1) front = rear = 0;
    else rear = (rear + 1) % MAX;
    queue[rear] = value;
    printf("Inserted %d.\n", value);
}
void dequeue(void) {
    if (front == -1) { printf("Circular queue is empty.\n"); return; }
    printf("Deleted element: %d\n", queue[front]);
    if (front == rear) front = rear = -1;
    else front = (front + 1) % MAX;
}
void display(void) {
    int i;
    if (front == -1) { printf("Circular queue is empty.\n"); return; }
    printf("Circular queue: ");
    i = front;
    while (1) {
        printf("%d ", queue[i]);
        if (i == rear) break;
        i = (i + 1) % MAX;
    }
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
