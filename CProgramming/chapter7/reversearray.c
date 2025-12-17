#include <stdio.h>

int main() {
    int a[50], size, n, i, temp;

    printf("Enter array size: ");
    scanf("%d", &size);

    printf("Enter array elements:\n");
    for(i = 0; i < size; i++)
        scanf("%d", &a[i]);

    printf("Enter n (number of elements to reverse): ");
    scanf("%d", &n);

    for(i = 0; i < n/2; i++) {
        temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }

    printf("Array after reversing first %d elements:\n", n);
    for(i = 0; i < size; i++)
        printf("%d ", a[i]);

    return 0;
}

