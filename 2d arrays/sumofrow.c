#include <stdio.h>

int main() {
    int matrix[10][10], rows, cols, i, j;

    // Read the matrix dimensions
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

    // Read the matrix elements
    printf("Enter the matrix elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Display the matrix elements
    printf("The matrix is:\n");   
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Find the sum of each row of the matrix
    printf("The sum of each row is:\n");
    for (i = 0; i < rows; i++) {
        int row_sum = 0;
        for (j = 0; j < cols; j++) {
            row_sum += matrix[i][j];
        }
        printf("%d\n", row_sum);
    }

    return 0;
}