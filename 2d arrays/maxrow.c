#include<stdio.h>



int main(int argc, char const *argv[])
{
    int i , j , arr[10][10] , row , column;
    printf("Enter the no. of rows : ");
    scanf("%d" , &row);

    printf("Enter the no. of columns : ");
    scanf("%d" , &column);

    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < column; j++)
        {
            printf("Enter the element %d[%d]",i+1 , j+1);
            scanf("%d" , &arr[i][j]);
        }

        printf("\n");
    }
//--------------------------------------------------------------------------------------

     for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < column; j++)
        {
            printf("%d   " , arr[i][j]);
        }
        printf("\n");
    }
//-----------------------------------------------------------------------------------------


int sum=0, sum1=0;


for ( i = 0; i < row; i++)
{
    
    sum=0;
    for ( j = 0;  j < column; j++)
    {
        sum += arr[i][j];     
    }
    
    if (sum>=sum1)
    {
       sum1 = sum;
    }
    
}

printf("The max sum is %d" , sum1);

}


