#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *head = NULL;

void insertBeginning(int value) {
    struct Node *newNode = malloc(sizeof(struct Node));
    if (!newNode) { printf("Memory allocation failed.\n"); return; }
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

void insertEnd(int value) {
    struct Node *newNode = malloc(sizeof(struct Node));
    struct Node *temp;
    if (!newNode) { printf("Memory allocation failed.\n"); return; }
    newNode->data = value;
    newNode->next = NULL;
    if (head == NULL) { head = newNode; return; }
    temp = head;
    while (temp->next != NULL) temp = temp->next;
    temp->next = newNode;
}

void deleteValue(int value) {
    struct Node *temp = head, *prev = NULL;
    while (temp != NULL && temp->data != value) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) { printf("Element not found.\n"); return; }
    if (prev == NULL) head = temp->next;
    else prev->next = temp->next;
    free(temp);
    printf("Element deleted.\n");
}

void display(void) {
    struct Node *temp = head;
    if (temp == NULL) { printf("List is empty.\n"); return; }
    printf("Linked list: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main(void) {
    int choice, value;
    do {
        printf("\n1.Insert at beginning  2.Insert at end  3.Delete by value  4.Display  5.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter value: "); scanf("%d", &value);
                insertBeginning(value); break;
            case 2:
                printf("Enter value: "); scanf("%d", &value);
                insertEnd(value); break;
            case 3:
                printf("Enter value to delete: "); scanf("%d", &value);
                deleteValue(value); break;
            case 4: display(); break;
            case 5: break;
            default: printf("Invalid choice.\n");
        }
    } while (choice != 5);

    while (head != NULL) {
        struct Node *temp = head;
        head = head->next;
        free(temp);
    }
    return 0;
}
