#include <stdio.h>

int main() {
    int limit, i, j;

    // Get the limit from the user
    printf("Enter a limit (1 to 100): ");
    scanf("%d", &limit);

    // Validate the input
    if (limit < 1 || limit > 100) {
        printf("Invalid input. Please enter a number between 1 and 100.\n");
        return 1;  // Return an error code
    }

    // Display multiplication tables from 1 to the entered limit
    for (i = 1; i <= limit; i++) {
        printf("Multiplication table for %d:\n", i);
        for (j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n");  // Add a newline between tables
    }

    return 0;
}
