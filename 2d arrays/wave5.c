#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[10][10];
    int i , j, k , row , column;

    printf("Enter the no. of rows : ");
    scanf("%d" , &row);
    printf("Enter the no. of column : ");
    scanf("%d" , &column);


    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < column; j++)
        {
            printf("Enter the value for element %d[%d] : " , i , j);
            scanf("%d" , &a[i][j]);
        }
        
    }
    

    for ( i = 0; i < column; i++)
    {
        if (i%2!=0)
        {
            for ( j = 0; j < row; j++)
            {
                printf("%d" , a[j][i]);
                
            }
            printf("\n");


            
        }

        else
        {
            for ( j = row-1; j >=0; j--)
            {
                printf("%d" , a[j][i]);
                
            }
            printf("\n");
        }
        
        
    }
    
}