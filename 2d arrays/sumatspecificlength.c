#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i , j , arr[10][10] , row , column , sum=0;
    printf("Enter the no. of rows : ");
    scanf("%d" , &row);

    printf("Enter the no. of columns : ");
    scanf("%d" , &column);

    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < column; j++)
        {
            printf("Enter the element %d[%d]  : ",i+1 , j+1);
            scanf("%d" , &arr[i][j]);
        }

        printf("\n");
    }

    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < column; j++)
        {
            printf("%d   " , arr[i][j]);
        }
        printf("\n");
    }
    
    int r1 , r2 , c1 , c2;

    printf("enter the r1 & r2 : ");
    scanf("%d %d" ,  &r1 , &c1);

     printf("enter the r1 & r2 : ");
    scanf("%d %d" ,  &r2 , &c2);

    for ( i = r1; i <= r2; i++)
    {
        for ( j = c1; j <= c2; j++)
        {
            sum = sum + arr[i][j];
        }
        
    }
    

    printf("Sum from (%d, %d) to (%d, %d) is %d" , r1 , c1 , r2 , c2  , sum);

}