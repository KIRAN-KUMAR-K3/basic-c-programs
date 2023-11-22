#include <stdio.h>

void printNumberPattern(int n) {
    int i, j;

    // Display the number pattern for the given value of n
    printf("Number pattern for n = %d:\n", n);
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
}

int main() {
    int n;

    // Get the value of n from the user
    printf("Enter the value of n for the number pattern: ");
    scanf("%d", &n);

    // Validate the input
    if (n <= 0) {
        printf("Invalid input. Please enter a positive integer for n.\n");
        return 1;  // Return an error code
    }

    // Display the number pattern
    printNumberPattern(n);

    return 0;
}
