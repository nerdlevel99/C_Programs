#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[10][10], i, j, row, column;
    int arr2[10][10], sum[10][10];

    printf("Enter the size for rows of the array : ");
    scanf("%d", &row);

    printf("Enter the size for the column : ");
    scanf("%d", &column);

    printf("\n----------first array-------------");

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("Enter the value for arr[%d][%d] : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    system("cls");
    printf("\n----------second array-------------");

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("Enter the value for arr[%d][%d] : ", i + 1, j + 1);
            scanf("%d", &arr2[i][j]);
        }
    }

    //  for ( i = 0; i < row; i++)
    //     {
    //         for ( j = 0; j < column; j++)
    //         {
    //             printf("%d + %d  " , arr[i][j] , arr2[i][j]);

    //         }

    //         printf("\n");
    //     }

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            sum[i][j] = arr[i][j] + arr2[i][j];
        }

        printf("\n");
    }

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
