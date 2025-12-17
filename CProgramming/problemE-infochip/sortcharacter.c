#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "tree";
    int freq[256] = {0};
    char chars[256];
    int count = 0;

    // Count frequency
    for (int i = 0; s[i]; i++) {
        if (freq[s[i]] == 0)
            chars[count++] = s[i];
        freq[s[i]]++;
    }

    // Sort characters
    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (freq[chars[i]] < freq[chars[j]] ||
               (freq[chars[i]] == freq[chars[j]] && chars[i] > chars[j])) {
                char temp = chars[i];
                chars[i] = chars[j];
                chars[j] = temp;
            }
        }
    }

    // Print result
    for (int i = 0; i < count; i++)
        printf("%c ", chars[i]);

    return 0;
}
