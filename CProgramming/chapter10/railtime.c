#include <stdio.h>

struct train {
    char name[50];
    char address[50];
};

int main() {
    struct train t[5];
    int i;

    for(i = 0; i < 5; i++) {
        printf("\nEnter train %d details\n", i+1);
        printf("Train Name: ");
        scanf(" %[^\n]", t[i].name);
        printf("Rail Time: ");
        scanf(" %[^\n]", t[i].address);
    }

    printf("\nTrain Name and Rail Time:\n");
    for(i = 0; i < 5; i++) {
        printf("%s - %s\n", t[i].name, t[i].address);
    }

    return 0;
}

