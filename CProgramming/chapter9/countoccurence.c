#include <stdio.h>

/* Function to count occurrences of a character */
int countChar(char str[], char ch) {
    int i, count = 0;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch)
            count++;
    }
    return count;
}

int main() {
    char str[100], ch;
    int result;

    printf("Enter a string: ");
    gets(str);

    printf("Enter character to search: ");
    scanf("%c", &ch);

    result = countChar(str, ch);

    printf("Number of occurrences = %d", result);

    return 0;
}

