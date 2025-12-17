#include <stdio.h>

// Recursive function to calculate the sum of digits
int sumd(int n) {
    // Base case: when n is 0, the sum is 0
    if (n == 0) {
        return 0;
    }
    
    // Recursive case: last digit + sum of digits of the remaining number
    return (n % 10) + sumd(n / 10);
}

int main() {
    int n;
    
    // Input the number from the user
    printf("Enter a number: ");
    scanf("%d", &n);
    
    // Call the recursive function and display the result
    printf("The sum of digits of %d is: %d\n", n, sumd(n));
    
    return 0;
}

