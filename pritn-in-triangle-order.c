#include <stdio.h>

void printTriangle(int n) {
    int i, j;

    printf("Pattern for n = %d:\n", n);

    // Print the pattern in a triangle shape with '1' at the middle
    for (i = 1; i <= n; i++) {
        // Print spaces for alignment
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print consecutive numbers in ascending order
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // Print consecutive numbers in reverse order (excluding '1' for the middle row)
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        printf("\n");
    }
}

int main() {
    int n;

    // Get the value of n from the user
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Validate the input
    if (n <= 0) {
        printf("Please enter a positive integer for n.\n");
        return 1;  // Return an error code
    }

    // Print the triangle pattern
    printTriangle(n);

    return 0;
}
