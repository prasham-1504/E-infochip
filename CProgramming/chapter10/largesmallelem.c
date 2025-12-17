#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *head = NULL, *temp, *newnode;
    int n, i, min, max, sum = 0, count = 0;

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

    temp = head;
    min = max = temp->data;

    while(temp != NULL) {
        if(temp->data < min) min = temp->data;
        if(temp->data > max) max = temp->data;
        sum += temp->data;
        count++;
        temp = temp->next;
    }

    printf("Smallest = %d\n", min);
    printf("Largest = %d\n", max);
    printf("Total = %d\n", sum);
    printf("Average = %.2f\n", (float)sum / count);

    return 0;
}

