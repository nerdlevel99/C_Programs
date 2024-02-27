#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[10][10], n, column, i, j;
    int transposed[10][10];
    n = 3;

    // printf("Enter the no. of ns in  array : ");
    // scanf("%d" , &n);

    //  printf("Enter the no. of column in  array : ");
    // scanf("%d" , &column);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter the value for %d[%d]   : ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < n; i++)
    {
        for (j = i; j <= n; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
            // n--;
        }
        printf("\n");
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }

        printf("\n");
    }

    return 0;
}
