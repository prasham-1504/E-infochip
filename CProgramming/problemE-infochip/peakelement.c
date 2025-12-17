#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 1};
    int n = 4;

    for (int i = 1; i < n - 1; i++) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            printf("Peak element found at index: %d", i);
            return 0;
        }
    }

    printf("No peak element found");
    return 0;
}
