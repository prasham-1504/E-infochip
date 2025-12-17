#include <stdio.h>
#include <limits.h>

int myAtoi(char *s) {
    int i = 0, sign = 1;
    long result = 0;

    // Step 1: Skip whitespace
    while (s[i] == ' ')
        i++;

    // Step 2: Handle sign
    if (s[i] == '-' || s[i] == '+') {
        sign = (s[i] == '-') ? -1 : 1;
        i++;
    }

    // Step 3: Convert digits
    while (s[i] >= '0' && s[i] <= '9') {
        result = result * 10 + (s[i] - '0');

        // Step 4: Handle overflow
        if (result > INT_MAX)
            return sign == 1 ? INT_MAX : INT_MIN;

        i++;
    }

    return (int)(result * sign);
}

int main() {
    char s[] = "1337c0d3";
    printf("%d", myAtoi(s));
    return 0;
}
