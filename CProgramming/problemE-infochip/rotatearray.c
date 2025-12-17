#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;
    int k = 2;
    char dir = 'R';   // 'L' for left, 'R' for right

    k = k % n; // handle large k

    if (dir == 'R') {
        for (int i = 0; i < k; i++) {
            int last = arr[n - 1];
            for (int j = n - 1; j > 0; j--)
                arr[j] = arr[j - 1];
            arr[0] = last;
        }
    } else {
        for (int i = 0; i < k; i++) {
            int first = arr[0];
            for (int j = 0; j < n - 1; j++)
                arr[j] = arr[j + 1];
            arr[n - 1] = first;
        }
    }

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}

