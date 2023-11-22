#include <stdio.h>

int main() {
    int n, i, j;

    // Get the value of n from the user
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Print the pattern
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}
