#include <stdio.h>

struct person {
    char name[50];
    int age;
    char address[100];
};

int main() {
    struct person p[5];
    int i;

    for(i = 0; i < 5; i++) {
        printf("\nEnter details of person %d\n", i+1);
        printf("Name: ");
        scanf(" %[^\n]", p[i].name);
        printf("Age: ");
        scanf("%d", &p[i].age);
        printf("Address: ");
        scanf(" %[^\n]", p[i].address);
    }

    printf("\nNames of persons:\n");
    for(i = 0; i < 5; i++) {
        printf("%s\n", p[i].name);
    }

    return 0;
}

