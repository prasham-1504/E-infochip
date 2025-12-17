#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* deleteTail(struct Node* head) {
    if (head == NULL)
        return NULL;

    if (head->next == NULL) {
        free(head);
        return NULL;
    }

    struct Node* temp = head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }

    free(temp->next);
    temp->next = NULL;
    return head;
}

// Print list
void printList(struct Node* head) {
    while (head) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;

    // Creating list: 0 -> 1 -> 2
    head = (struct Node*)malloc(sizeof(struct Node));
    head->data = 0;
    head->next = (struct Node*)malloc(sizeof(struct Node));
    head->next->data = 1;
    head->next->next = (struct Node*)malloc(sizeof(struct Node));
    head->next->next->data = 2;
    head->next->next->next = NULL;

    head = deleteTail(head);
    printList(head);

    return 0;
}
