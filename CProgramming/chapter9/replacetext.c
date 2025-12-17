#include <stdio.h>
#include <string.h>

int main() {
    char text[500];
    char result[500];
    char *pos;
    int i = 0;

    printf("Enter text: ");
    fgets(text, sizeof(text), stdin);

    pos = strstr(text, "Calcutta");

    while (pos != NULL) {
        /* copy text before "Calcutta" */
        while (text + i < pos)
            result[strlen(result)] = text[i++];

        /* append "Kolkata" */
        strcat(result, "Kolkata");
        i += 8;   // length of "Calcutta"

        pos = strstr(text + i, "Calcutta");
    }

    /* copy remaining text */
    strcat(result, text + i);

    printf("Modified text: %s", result);

    return 0;
}

