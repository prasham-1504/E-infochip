#include <stdio.h>
#include <string.h>

int main() {
    char s1[] = "CAT";
    char s2[] = "ACT";
    int count[26] = {0};

    if (strlen(s1) != strlen(s2)) {
        printf("False");
        return 0;
    }

    for (int i = 0; s1[i]; i++) {
        count[s1[i] - 'A']++;
        count[s2[i] - 'A']--;
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            printf("False");
            return 0;
        }
    }

    printf("True");
    return 0;
}
