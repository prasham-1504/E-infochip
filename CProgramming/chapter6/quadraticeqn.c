#include <stdio.h>
#include <math.h>

// Function to find the roots of the quadratic equation
void findRoots(int a, int b, int c) {
    int discriminant = b * b - 4 * a * c;  // Calculate the discriminant
    
    // Case 1: Two real and distinct roots (when discriminant > 0)
    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2.0 * a);
        double root2 = (-b - sqrt(discriminant)) / (2.0 * a);
        printf("The roots are real and distinct.\n");
        printf("Root 1 = %.2lf\n", root1);
        printf("Root 2 = %.2lf\n", root2);
    }
    // Case 2: One real root (when discriminant = 0)
    else if (discriminant == 0) {
        double root = -b / (2.0 * a);
        printf("The root is real and repeated.\n");
        printf("Root = %.2lf\n", root);
    }
    // Case 3: No real roots (when discriminant < 0)
    else {
        printf("The equation has no real roots.\n");
    }
}

int main() {
    int a, b, c;
    
    // Input coefficients from the user
    printf("Enter coefficients a, b, and c of the quadratic equation (ax^2 + bx + c = 0):\n");
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    printf("c: ");
    scanf("%d", &c);
    
    // Call the function to find the roots
    findRoots(a, b, c);
    
    return 0;
}

