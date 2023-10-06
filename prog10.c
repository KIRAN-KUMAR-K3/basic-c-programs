#include <stdio.h>

// Function to calculate the determinant of a matrix
int determinant(int n, int matrix[][n]) {
    int det = 0;

    if (n == 1) {
        return matrix[0][0];
    } else if (n == 2) {
        return (matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0]);
    } else {
        for (int col = 0; col < n; col++) {
            int submatrix[n - 1][n - 1];
            int sign = (col % 2 == 0) ? 1 : -1;

            for (int i = 1; i < n; i++) {
                int submatrix_col = 0;
                for (int j = 0; j < n; j++) {
                    if (j == col) continue;
                    submatrix[i - 1][submatrix_col] = matrix[i][j];
                    submatrix_col++;
                }
            }

            det += sign * matrix[0][col] * determinant(n - 1, submatrix);
        }
    }

    return det;
}

int main() {
    int n;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int det = determinant(n, matrix);

    printf("Determinant of the matrix = %d\n", det);

    return 0;
}
