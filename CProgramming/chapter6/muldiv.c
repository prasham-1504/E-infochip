#include <stdio.h>

// Function to multiply two integers without using * operator
int mult(int a, int b) {
    int product = 0;
    
    // Handle negative numbers by taking the absolute value
    int sign = 1;
    if (a < 0) {
        a = -a;
        sign = -sign;
    }
    if (b < 0) {
        b = -b;
        sign = -sign;
    }
    
    // Perform multiplication by repeated addition
    for (int i = 0; i < b; i++) {
        product += a;
    }
    
    return sign * product;  // Return the result with the correct sign
}

// Function to find the quotient of two integers without using / operator
int quo(int a, int b) {
    int quotient = 0;
    
    // Handle negative numbers by tracking the signs
    int sign = 1;
    if (a < 0) {
        a = -a;
        sign = -sign;
    }
    if (b < 0) {
        b = -b;
        sign = -sign;
    }
    
    // Perform division by repeated subtraction
    while (a >= b) {
        a -= b;
        quotient++;
    }
    
    return sign * quotient;  // Return the result with the correct sign
}

// Function to find the remainder of two integers without using % operator
int rem(int a, int b) {
    // Handle negative numbers by taking the absolute value
    int sign = 1;
    if (a < 0) {
        a = -a;
        sign = -sign;
    }
    if (b < 0) {
        b = -b;
    }
    
    // Perform division by repeated subtraction to get the remainder
    while (a >= b) {
        a -= b;
    }
    
    return sign * a;  // Return the result with the correct sign
}

int main() {
    int a, b;
    
    // Input two integers from the user
    printf("Enter two integers (a and b): ");
    scanf("%d %d", &a, &b);
    
    // Call the functions and display the results
    printf("Product of %d and %d is: %d\n", a, b, mult(a, b));
    printf("Quotient of %d and %d is: %d\n", a, b, quo(a, b));
    printf("Remainder of %d and %d is: %d\n", a, b, rem(a, b));
    
    return 0;
}

