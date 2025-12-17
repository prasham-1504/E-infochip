#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node* create(struct node *head, int n) {
    struct node *temp, *newnode;
    int i;
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
    return head;
}

struct node* concat(struct node *l1, struct node *l2) {
    struct node *temp = l1;
    while(temp->next != NULL)
        temp = temp->next;
    temp->next = l2;
    return l1;
}

void display(struct node *head) {
    while(head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
}

int main() {
    struct node *l1 = NULL, *l2 = NULL;
    int n1, n2;

    printf("Enter number of nodes in list 1: ");
    scanf("%d", &n1);
    l1 = create(l1, n1);

    printf("Enter number of nodes in list 2: ");
    scanf("%d", &n2);
    l2 = create(l2, n2);

    l1 = concat(l1, l2);

    printf("Concatenated List: ");
    display(l1);

    return 0;
}

