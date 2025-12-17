#include <stdio.h>
#include <string.h>

int main() {
    char plain[]   = "abcdefghijklmnopqrstuvwxyz";
    char encoded[] = "mnkghdtabwvup raczjxi eyflos";
    char text[100], result[100];
    int i, j;
    char choice;

    printf("Enter text: ");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = '\0';

    printf("Enter choice (e = encode, d = decode): ");
    scanf(" %c", &choice);

    for (i = 0; text[i] != '\0'; i++) {
        if (text[i] >= 'a' && text[i] <= 'z') {
            if (choice == 'e') {
                for (j = 0; j < 26; j++)
                    if (text[i] == plain[j])
                        result[i] = encoded[j];
            } else {
                for (j = 0; j < 26; j++)
                    if (text[i] == encoded[j])
                        result[i] = plain[j];
            }
        } else {
            result[i] = text[i];   // keep spaces & others
        }
    }
    result[i] = '\0';

    printf("Result: %s\n", result);
    return 0;
}

