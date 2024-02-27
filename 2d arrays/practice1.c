#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[10][10];
    int b[10][10];
    int r , c , c2 , r2 , i , j;

printf("\n--------------------Matrix 1 ------------------\n");
    printf("Enter the row for matrix 1 : ");
    scanf("%d" , &r);
    printf("Enter the columns for matrix 1 : ");
    scanf("%d" , &c);

    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            printf("Enter the value for %d[%d] : "  , i+1 , j+1);
            scanf("%d" , &a[i][j]);
        }
        
    }
    


    printf("\n--------------------Matrix 2 ------------------\n");
    printf("Enter the row for matrix 2 : ");
    scanf("%d" , &r2);
    printf("Enter the columns for matrix 2 : ");
    scanf("%d" , &c2);

    for ( i = 0; i < r2; i++)
    {
        for ( j = 0; j < c2; j++)
        {
            printf("Enter the value for %d[%d] : "  , i+1 , j+1);
            scanf("%d" , &b[i][j]);
        }
        
    }

    int mul[c2][r2];
    for ( i = 0; i < c2; i++)
    {
        for ( j = 0; j < r2; j++)
        {
            mul[i][j] = 0;
            for (int k = 0; k < c; k++)
            {
                mul[i][j] += a[i][k] *b[k][j];
            }
            
        }
        
    }
    

    for ( i = 0; i < c2; i++)
    {
        for ( j = 0; j < r2; j++)
                {
                printf("%d   " , mul[i][j]);
                }
                printf("\n");
    }
        
        
    

    return 0;
}
