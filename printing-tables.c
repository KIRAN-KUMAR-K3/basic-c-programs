#include <stdio.h>

void printMultiplicationTable(int number, int limit) {
    int i;

    // Display multiplication table for the given number up to the specified limit
    printf("Multiplication table for %d up to %d:\n", number, limit);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }
    printf("\n");  // Add a newline between tables
}

int main() {
    int limit, i;

    // Get the limit from the user
    printf("Enter a limit (1 to 100) for multiplication tables: ");
    scanf("%d", &limit);

    // Validate the input
    if (limit < 1 || limit > 100) {
        printf("Invalid input. Please enter a number between 1 and 100.\n");
        return 1;  // Return an error code
    }

    // Display multiplication tables from 1 to the entered limit
    for (i = 1; i <= limit; i++) {
        printMultiplicationTable(i, limit);
    }

    return 0;
}
