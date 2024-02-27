#include <stdio.h>

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
    
    int max=arr[0][0] , min=arr[0][0] , minrow=1 , mincolumn=1 ,  maxrow , maxcolumn;
    for ( i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
                if (max < arr[i][j])
                {
                     maxrow = i + 1;
                    maxcolumn = j + 1;
                    max = arr[i][j];
                   
                }


                if (min > arr[i][j])
                {
                     minrow = i+1;
                    mincolumn = j+1;
                    min = arr[i][j];
                   
                }
                
                
        }
        
    }

    printf("The max is %d located at row - %d column - %d\n The min is %d located at row - %d and column -%d" , max ,maxrow, maxcolumn,   min , minrow ,  mincolumn);

    
    
    return 0;
}
