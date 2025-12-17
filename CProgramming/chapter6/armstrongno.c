#include <stdio.h>
#include <math.h>

// Function to calculate the sum of cubes of digits of a number
int cubesum(int n) {
    int sum = 0, digit;
    
    // Loop through each digit of the number
    while (n > 0) {
        digit = n % 10; // Get the last digit
        sum += digit * digit * digit; // Add the cube of the digit to the sum
        n /= 10; // Remove the last digit
    }
    
    return sum;
}

// Function to check Armstrong numbers in a given range
void armstrongNumbers(int start, int end) {
    printf("Armstrong numbers between %d and %d are:\n", start, end);
    
    // Iterate through the range
    for (int i = start; i <= end; i++) {
        // Check if the number is an Armstrong number by comparing with the sum of cubes
        if (i == cubesum(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int start, end;

    // Take the range as input
    printf("Enter the range (start and end): ");
    scanf("%d %d", &start, &end);

    // Call the function to print Armstrong numbers
    armstrongNumbers(start, end);
    
    return 0;
}

