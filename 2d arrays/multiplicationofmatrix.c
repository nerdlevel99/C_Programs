#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[10][10] , b[10][10]  , i , j , k  , row , column ,row1 , column1 ,  sum;
    printf("Enter the rows : ");
    scanf("%d" , &row);

    printf("Enter the column : ");
    scanf("%d" , &column);
   

    printf("\n-------------Enter matrix 1 3x3---------------\n");
    for ( i = 0; i < row; i++)
    
    {
        for ( j = 0; j < column; j++)
        {
            printf("Enter the element %d[%d] : " ,i+1 , j+1);
            scanf("%d" , &a[i][j]);
        }
        
    }

    printf("\n--------------Enter matrix 2 3x3---------------\n");

    printf("Enter the rows : ");
    scanf("%d" , &row1);

    printf("Enter the column : ");
    scanf("%d" , &column1);

    int mul[row][column1];
    if (column != row1 )
    {
        printf("Multiplication is not possible");
    }
    
     for ( i = 0; i < row1; i++)
    {
        for ( j = 0; j < column1; j++)
        {
            printf("Enter the element %d[%d] : " ,i+1 , j+1);
            scanf("%d" , &b[i][j]);
        }
        
    }


    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < column1; j++)
        {
            mul[i][j]=0;
            for ( k = 0; k < column; k++)
            {
                mul[i][j] += a[i][k] * b[k][j];

            }
            
        }
        
    }



    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < column1; j++)
        {
            printf("%d  " , mul[i][j]);
        }
        printf("\n");
    }
    


    
    

    return 0;
}
