#include <stdio.h>

// Function to convert lowercase character to uppercase
char toUpperCase(char ch) {
    // Check if the character is a lowercase letter
    if (ch >= 'a' && ch <= 'z') {
        return ch - 32;  // Convert to uppercase by subtracting 32
    }
    return ch;  // Return the character as is if not lowercase
}

int main() {
    char ch;
    
    // Input a lowercase character
    printf("Enter a lowercase character: ");
    scanf("%c", &ch);
    
    // Call the function and display the result
    char upperChar = toUpperCase(ch);
    printf("The uppercase equivalent is: %c\n", upperChar);
    
    return 0;
}

