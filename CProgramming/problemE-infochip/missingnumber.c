#include <stdio.h>

int main() {
    int N = 5;
    int arr[] = {1, 2, 4, 5};
    int sum = 0;

    for (int i = 0; i < N - 1; i++) {
        sum += arr[i];
    }

    int expectedSum = N * (N + 1) / 2;
    int missingNumber = expectedSum - sum;

    printf("Missing number is: %d", missingNumber);

    return 0;
}
