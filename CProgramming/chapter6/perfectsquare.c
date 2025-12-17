#include <stdio.h>

// Function to find the sum of divisors of a number
int sumdiv(int n) {
    int sum = 0;
    
    // Find divisors and add them to the sum
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {  // If i is a divisor of n
            sum += i;
        }
    }
    
    return sum;
}

// Function to check if a number is perfect
int isPerfect(int n) {
    // A number is perfect if the sum of divisors is equal to the number
    return sumdiv(n) == n;
}

// Function to print all perfect numbers in a given range
void perfectNumbers(int start, int end) {
    printf("Perfect numbers between %d and %d are:\n", start, end);
    
    // Iterate through the range and check for perfect numbers
    for (int i = start; i <= end; i++) {
        if (isPerfect(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int start, end;
    
    // Input range from the user
    printf("Enter the range (start and end): ");
    scanf("%d %d", &start, &end);
    
    // Call function to print perfect numbers in the range
    perfectNumbers(start, end);
    
    return 0;
}

