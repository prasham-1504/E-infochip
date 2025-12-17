#include <stdio.h>

int main() {
    int a[50], n, i;
    int sumEven = 0, prodOdd = 1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < n; i++) {
        if(a[i] % 2 == 0)
            sumEven += a[i];
        else
            prodOdd *= a[i];
    }

    printf("Sum of even numbers = %d\n", sumEven);
    printf("Product of odd numbers = %d\n", prodOdd);

    return 0;
}

