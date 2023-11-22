#include <stdio.h>

int main() {
    int n, i, j;

    // Get the value of n from the user
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Print the pattern in a triangle shape
    for (i = 1; i <= n; i++) {
        // Print spaces for alignment
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print consecutive numbers
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // Print consecutive numbers in reverse order
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}
