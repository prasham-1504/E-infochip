#include <stdio.h>

// Array of words for digits
char* words[] = {
    "Zero", "One", "Two", "Three", "Four", 
    "Five", "Six", "Seven", "Eight", "Nine"
};

// Recursive function to print number in words
void printWords(int n) {
    // Base case: if the number is 0, do nothing
    if (n == 0) {
        return;
    }

    // Recursive case: first process the next digits (n/10) and then the current digit
    printWords(n / 10);  // Recursively process the higher place digits

    // Print the current digit's word
    printf("%s ", words[n % 10]);
}

int main() {
    int n;
    
    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &n);

    // Edge case: if the number is 0
    if (n == 0) {
        printf("Zero");
    } else {
        // Call the recursive function to print the number in words
        printWords(n);
    }
    printf("\n");
    
    return 0;
}

