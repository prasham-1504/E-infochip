#include <stdio.h>

void replaceChar(char s[], char oldc, char newc) {
    int i;
    for(i = 0; s[i] != '\0'; i++) {
        if(s[i] == oldc)
            s[i] = newc;
    }
}

int main() {
    char str[100], oldc, newc;

    printf("Enter string: ");
    gets(str);

    printf("Enter character to replace: ");
    scanf(" %c", &oldc);

    printf("Enter new character: ");
    scanf(" %c", &newc);

    replaceChar(str, oldc, newc);

    printf("Modified string: %s", str);

    return 0;
}

