#include <stdio.h>

int main() {
    int arr[] = {1, 0, 2, 0, 3, 0, 4};
    int n = 7;
    int j = 0;

    // Move non-zero elements forward
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[j++] = arr[i];
        }
    }

    // Fill remaining positions with zero
    while (j < n) {
        arr[j++] = 0;
    }

    // Print result
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}


