#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int searchElement(struct Node* head, int val) {
    while (head != NULL) {
        if (head->data == val)
            return 1;   // True
        head = head->next;
    }
    return 0;           // False
}

int main() {
    struct Node* head = NULL;

    // Creating list: 0 -> 1 -> 2
    head = (struct Node*)malloc(sizeof(struct Node));
    if (head == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    head->data = 0;

    head->next = (struct Node*)malloc(sizeof(struct Node));
    if (head->next == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    head->next->data = 1;

    head->next->next = (struct Node*)malloc(sizeof(struct Node));
    if (head->next->next == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    head->next->next->data = 2;
    head->next->next->next = NULL;

    int val = 2;

    if (searchElement(head, val))
        printf("True\n");
    else
        printf("False\n");

    return 0;
}

