#include <stdio.h>
int main()
{
    int arr[5][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}, {16, 17, 18, 19, 20}, {21, 22, 23, 24, 25}};
    int primary[5][5] = {{0, 0, 0, 0, 0}, {0, 0, 0, 0, 0}, {0,0,0,0,0}, {0,0,0,0,0}, {0,0,0,0,0}};
    int secondary[5][5] = {{0, 0, 0, 0, 0}, {0, 0, 0, 0, 0}, {0,0,0,0,0}, {0,0,0,0,0}, {0,0,0,0,0}};
    int n=5 , i , j;

    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            if (i==j)
            {
                primary[i][j] = arr[i][j];
            }

            
        }
        
    }

    for ( i = 0; i < n; i++)
    {
        secondary[i][n-i-1] =  arr[i][n-i-1];

    }
    

    printf("the primary diagonal matrix is : \n");
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j<n; j++)
        {
            printf("%d\t" , primary[i][j]);
        }
        printf("\n");
    }
    
    printf("the secondary diagonal matrix is : \n");
    for ( i = 0; i < n; i++)
    {
        for ( j=0;j<n; j++)
        {
            printf("%d\t" , secondary[i][j]);
        }
        printf("\n");
        
    }
    
    
    return 0;
}