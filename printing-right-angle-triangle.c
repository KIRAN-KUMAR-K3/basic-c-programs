#include <stdio.h>

int main() {
    int n, i, j;

    // Get the value of n from the user
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Print the mirror image pattern
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

    return 0;
}
