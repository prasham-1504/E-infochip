#include <stdio.h>
#include <string.h>

// Function to extract substring
void substring(char source[], char dest[], int i, int n) {
    int length = strlen(source);

    if (i < 0 || i >= length || n < 0) {
        dest[0] = '\0'; // empty string if invalid input
        return;
    }

    int j;
    for (j = 0; j < n && (i + j) < length; j++) {
        dest[j] = source[i + j];
    }
    dest[j] = '\0'; // null terminate the substring
}

int main() {
    char str[100], sub[100];
    int start, len;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // remove newline character

    printf("Enter the starting index (i): ");
    scanf("%d", &start);

    printf("Enter the number of characters (n): ");
    scanf("%d", &len);

    substring(str, sub, start, len);

    printf("Extracted substring: \"%s\"\n", sub);

    return 0;
}

