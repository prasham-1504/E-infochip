#include <stdio.h>

void deleteChar(char s[], char ch) {
    int i, j = 0;
    for(i = 0; s[i] != '\0'; i++) {
        if(s[i] != ch)
            s[j++] = s[i];
    }
    s[j] = '\0';
}

int main() {
    char str[100], ch;

    printf("Enter string: ");
    gets(str);

    printf("Enter character to delete: ");
    scanf(" %c", &ch);

    deleteChar(str, ch);

    printf("Resultant string: %s", str);

    return 0;
}

