#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "paper";
    char t[] = "title";
    int mapS[256] = {0};
    int mapT[256] = {0};

    for (int i = 0; i < strlen(s); i++) {
        if (mapS[s[i]] != mapT[t[i]]) {
            printf("False");
            return 0;
        }
        mapS[s[i]] = i + 1;
        mapT[t[i]] = i + 1;
    }

    printf("True");
    return 0;
}
