#include <stdio.h>

struct employee {
    char name[25];
    int age;
    int basic;
    float total;
};

int main() {
    struct employee e[5], temp;
    int i, j;

    for(i = 0; i < 5; i++) {
        printf("\nEnter Name, Age, Basic Salary: ");
        scanf("%s %d %d", e[i].name, &e[i].age, &e[i].basic);

        e[i].total = e[i].basic + (0.10 * e[i].basic) + (0.05 * e[i].basic);
    }

    for(i = 0; i < 5; i++) {
        for(j = i + 1; j < 5; j++) {
            if(e[i].total < e[j].total) {
                temp = e[i];
                e[i] = e[j];
                e[j] = temp;
            }
        }
    }

    printf("\nName Age Total Salary\n");
    for(i = 0; i < 5; i++) {
        printf("%s %d %.2f\n", e[i].name, e[i].age, e[i].total);
    }

    return 0;
}

