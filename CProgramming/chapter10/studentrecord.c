#include <stdio.h>
#include <stdlib.h>

struct node {
    char name[20];
    int rollno;
    int marks;
    struct node *link;
};

int main() {
    struct node *head = NULL, *temp, *newnode;
    int n, i, roll;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        newnode = (struct node*)malloc(sizeof(struct node));
        scanf("%s %d %d", newnode->name,
                          &newnode->rollno,
                          &newnode->marks);
        newnode->link = NULL;

        if(head == NULL)
            head = temp = newnode;
        else {
            temp->link = newnode;
            temp = newnode;
        }
    }

    printf("Enter roll number to search: ");
    scanf("%d", &roll);

    temp = head;
    while(temp != NULL) {
        if(temp->rollno == roll) {
            printf("Record Found:\n");
            printf("Name: %s\nRoll No: %d\nMarks: %d\n",
                   temp->name, temp->rollno, temp->marks);
            return 0;
        }
        temp = temp->link;
    }

    printf("Record Not Found");

    return 0;
}

