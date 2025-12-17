#include <stdio.h>

int main() {
    int n, reversed = 0, original;
    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;
    if (n < 0) {
        printf("False\n"); // negative numbers aren’t palindromes
        return 0;
    }

    while (n != 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }

    if (original == reversed)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
