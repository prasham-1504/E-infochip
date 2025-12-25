#include <stdio.h>

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main() {
    int n, i, arr[50], result;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter numbers:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    result = arr[0];
    for (i = 1; i < n; i++)
        result = gcd(result, arr[i]);

    printf("GCD = %d\n", result);
    return 0;
}

