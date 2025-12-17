#include <stdio.h>
#include <ctype.h>

/* Function to compare strings without case sensitivity */
int caseCompare(char s1[], char s2[]) {
    int i = 0;

    while (s1[i] && s2[i]) {
        if (tolower(s1[i]) != tolower(s2[i]))
            return 0;   // Not equal
        i++;
    }

    if (s1[i] == s2[i])
        return 1;       // Equal
    else
        return 0;
}

int main() {
    char str1[50], str2[50];

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    if (caseCompare(str1, str2))
        printf("Strings are equal (case insensitive)");
    else
        printf("Strings are not equal");

    return 0;
}

