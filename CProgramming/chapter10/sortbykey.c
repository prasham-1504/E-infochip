#include <stdio.h>

struct emp {
    char *name;
    int age;
    float salary;
};

int main() {
    struct emp e[10], temp;
    int i, j;
    char names[10][20];

    for(i = 0; i < 10; i++) {
        e[i].name = names[i];
        printf("\nEnter Name, Age, Salary: ");
        scanf("%s %d %f", e[i].name, &e[i].age, &e[i].salary);
    }

    printf("\nBefore Sorting:\n");
    for(i = 0; i < 10; i++)
        printf("%s %d %.2f\n", e[i].name, e[i].age, e[i].salary);

    for(i = 0; i < 10; i++) {
        for(j = i + 1; j < 10; j++) {
            if(e[i].salary > e[j].salary ||
              (e[i].salary == e[j].salary && e[i].age > e[j].age)) {
                temp = e[i];
                e[i] = e[j];
                e[j] = temp;
            }
        }
    }

    printf("\nAfter Sorting:\n");
    for(i = 0; i < 10; i++)
        printf("%s %d %.2f\n", e[i].name, e[i].age, e[i].salary);

    return 0;
}

