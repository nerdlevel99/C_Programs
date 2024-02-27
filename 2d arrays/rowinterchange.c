#include <stdio.h>

int main() {
    int matrix[10][10], n, m, i, j, row1, row2, col1, col2, temp;

    printf("Enter the number of rows : ");
    scanf("%d", &n);
    printf("Enter the number of columns: ");
    scanf("%d", &m);

    // Input the matrix elements
    printf("Enter the matrix elements:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Input the rows and columns to be interchanged
    printf("Enter the row indices to be interchanged: ");
    scanf("%d %d", &row1, &row2);
    printf("Enter the column indices to be interchanged: ");
    scanf("%d %d", &col1, &col2);

    // Interchange the rows
    for (j = 0; j < m; j++) {
        temp = matrix[row1][j];
        matrix[row1][j] = matrix[row2][j];
        matrix[row2][j] = temp;
    }

    // Interchange the columns
    for (i = 0; i < n; i++) {
        temp = matrix[i][col1];
        matrix[i][col1] = matrix[i][col2];
        matrix[i][col2] = temp;
    }

    // Print the modified matrix
    printf("Modified matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}