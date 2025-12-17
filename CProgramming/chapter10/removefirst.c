#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node* moveFirstToLast(struct node *head) {
    struct node *first, *temp;

    if(head == NULL || head->next == NULL)
        return head;

    first = head;
    head = head->next;

    temp = head;
    while(temp->next != NULL)
        temp = temp->next;

    temp->next = first;
    first->next = NULL;

    return head;
}

void display(struct node *head) {
    while(head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
}

int main() {
    struct node *head = NULL, *temp, *newnode;
    int n, i;

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

    head = moveFirstToLast(head);

    printf("Modified List: ");
    display(head);

    return 0;
}

