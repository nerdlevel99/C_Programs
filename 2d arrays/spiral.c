#include <stdio.h>

int main(int argc, char const *argv[])
{
    int maxrow , minrow=0, maxcol , mincol=0 ;  
    int i  , j , arr[10][10] , row , col;

    printf("Enter the no. of rows : ");
    scanf("%d" , &row);

    printf("Enter the no. of Columns : ");
    scanf("%d" , &col);

        maxrow = row-1;
        minrow = 0;
        maxcol = col-1;
        mincol = 0;
        int n = row*col;

        for ( i = 0; i < row; i++)
        {
            for ( j = 0; j < col; j++)
            {
                printf("Enter value for element %d[%d] : " , i , j);
                scanf("%d" , &arr[i][j]);
            }
            
        }
        
    int count = 0;
    while (count<n)

    {
        for ( j = mincol; j <= maxcol; j++)
        {
            printf("%d  "  , arr[minrow][j]);
            count++;

        }

            minrow++;

        for ( i = minrow; i <= maxrow; i++)
        {
            printf("%d  "  , arr[i][maxcol]);
            count++;

        }

            maxcol--;

        for ( i = maxcol; i >= mincol; i--)
        {
            printf("%d  "  , arr[maxrow][i]);
            count++;

        }

            maxrow--;


         for ( j = maxrow; j >=minrow ; j--)
        {
            printf("%d  "  , arr[j][mincol]);
            count++;

        }

        
        mincol++;

        
    }


    
    
    
    return 0;
}
