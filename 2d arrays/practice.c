#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[2][1] = {{1}, {2}};
    int b[1][2] = {{2 , 1}};

    int r= 2 , c = 1 ; 
    int r2 = 1 , c2 = 2;
    int mul[2][2] , i , j , k;

    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c2; j++)
        {
            mul[i][j] = 0;
            for ( k = 0; k < c; k++)
            {
                mul[i][j] += a[i][k] * b[k][j];
            }
            
        }
        
    }

    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c2; j++)
        {
            printf("%d  " , mul[i][j]);
        }
        printf("\n");
    }
    
    

    return 0;
}
