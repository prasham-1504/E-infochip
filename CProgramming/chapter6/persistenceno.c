#include <stdio.h>

// Function to calculate the product of digits of a number
int productOfDigits(int n) {
    int product = 1, digit;
    
    // Multiply all digits of the number
    while (n > 0) {
        digit = n % 10;  // Get the last digit
        product *= digit;  // Multiply the product by the digit
        n /= 10;  // Remove the last digit
    }
    
    return product;
}

// Function to calculate the persistence of a number
int persistence(int n) {
    int count = 0;
    
    // Keep multiplying the digits until we reduce it to a single digit
    while (n >= 10) {
        n = productOfDigits(n);  // Update n to be the product of its digits
        count++;  // Increment the persistence counter
    }
    
    return count;
}

int main() {
    int num;
    
    // Take input from the user
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Call the persistence function and print the result
    int result = persistence(num);
    printf("The persistence of %d is: %d\n", num, result);
    
    return 0;
}

