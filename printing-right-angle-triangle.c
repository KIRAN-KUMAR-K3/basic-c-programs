#include <stdio.h>

void printMirrorPattern(int n) {
    int i, j;

    // Display the mirror image pattern for the given value of n
    printf("Mirror image pattern for n = %d:\n", n);
    for (i = 1; i <= n; i++) {
        // Print spaces for alignment
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print consecutive numbers in reverse order
        for (j = i; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }
}

int main() {
    int n;

    // Get the value of n from the user
    printf("Enter the value of n for the mirror image pattern: ");
    scanf("%d", &n);

    // Validate the input
    if (n <= 0) {
        printf("Invalid input. Please enter a positive integer for n.\n");
        return 1;  // Return an error code
    }

    // Display the mirror image pattern
    printMirrorPattern(n);

    return 0;
}
