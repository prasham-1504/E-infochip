#include <stdio.h>

int main() {
    int n, reversed = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    int temp = n;
    if (temp < 0) temp = -temp;

    while (temp != 0) {
        int digit = temp % 10;
        reversed = reversed * 10 + digit;
        temp /= 10;
    }

    if (n < 0) reversed = -reversed;
    printf("Reversed number: %d\n", reversed);
    return 0;
}
