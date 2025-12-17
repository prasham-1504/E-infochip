#include <stdio.h>

// Recursive function to calculate C(n, r)
int rcomb(int n, int r) {
    // Base case: if r == 0 or r == n, return 1
    if (r == 0 || r == n) {
        return 1;
    }
    
    // Recursive case: apply the formula C(n, r) = C(n-1, r-1) + C(n-1, r)
    return rcomb(n - 1, r - 1) + rcomb(n - 1, r);
}

int main() {
    int n, r;
    
    // Input values for n and r
    printf("Enter n (number of objects): ");
    scanf("%d", &n);
    
    printf("Enter r (number of selected objects): ");
    scanf("%d", &r);
    
    // Call the recursive function and display the result
    printf("C(%d, %d) = %d\n", n, r, rcomb(n, r));
    
    return 0;
}

