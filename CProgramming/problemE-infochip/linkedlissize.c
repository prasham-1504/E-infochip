#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int lengthOfList(struct Node* head) {
    int count = 0;
    while (head != NULL) {
        count++;
        head = head->next;
    }
    return count;
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

    printf("Length of linked list: %d", lengthOfList(head));
    return 0;
}
