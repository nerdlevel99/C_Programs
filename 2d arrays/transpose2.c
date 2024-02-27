#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[10][10] , row , column  , i , j;
    int transposed[10][10];


    printf("Enter the no. of rows in  array : ");
    scanf("%d" , &row);

     printf("Enter the no. of column in  array : ");
    scanf("%d" , &column);

    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < column; j++)
        {
            printf("Enter the value for %d[%d]   : " , i+1 , j+1);
            scanf("%d" , &arr[i][j]);
        }
        
    }


    for ( i = 0; i < column; i++)
    {
        for ( j = 0; j < row; j++)
        {
            printf("%d  " , arr[j][i]);
        }
        printf("\n");
    }
    
     

    return 0;
}
