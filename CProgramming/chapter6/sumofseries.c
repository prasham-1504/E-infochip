#include <stdio.h>

// Function to calculate the sum of the series up to n terms
double sumOfSeries(int n) {
    double sum = 0.0;

    // Loop to calculate the sum of 1/i^2
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / (i * i);  // Add 1/i^2 to the sum
    }
    
    return sum;
}

int main() {
    int n;
    
    // Input the number of terms from the user
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);
    
    // Call the function to calculate the sum of the series
    double result = sumOfSeries(n);
    
    // Print the result
    printf("The sum of the series up to %d terms is: %.6f\n", n, result);
    
    return 0;
}

