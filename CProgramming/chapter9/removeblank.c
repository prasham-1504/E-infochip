#include <stdio.h>
#include <string.h>

void trim(char s[]) {
    int i = 0, j, k;

    /* Remove leading blanks */
    while (s[i] == ' ')
        i++;

    for (j = 0; s[j + i] != '\0'; j++)
        s[j] = s[j + i];
    s[j] = '\0';

    /* Remove trailing blanks */
    k = strlen(s) - 1;
    while (k >= 0 && s[k] == ' ') {
        s[k] = '\0';
        k--;
    }
}

int main() {
    char str[200];

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    trim(str);

    printf("After removing leading and trailing blanks: '%s'\n", str);

    return 0;
}

