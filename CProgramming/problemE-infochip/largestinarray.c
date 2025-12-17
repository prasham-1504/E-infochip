#include <stdio.h>

int main() {
    int arr[] = {10, 45, 23, 89, 12};
    int n = 5;
    int largest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    printf("Largest element in the array is: %d", largest);

    return 0;
}
