#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int countOccurrence(struct node *head, int key) {
    int count = 0;
    while(head != NULL) {
        if(head->data == key)
            count++;
        head = head->next;
    }
    return count;
}

int main() {
    struct node *head = NULL, *temp, *newnode;
    int n, i, key;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        newnode = (struct node*)malloc(sizeof(struct node));
        scanf("%d", &newnode->data);
        newnode->next = NULL;

        if(head == NULL)
            head = temp = newnode;
        else {
            temp->next = newnode;
            temp = newnode;
        }
    }

    printf("Enter element to count: ");
    scanf("%d", &key);

    printf("Occurrence = %d", countOccurrence(head, key));

    return 0;
}

