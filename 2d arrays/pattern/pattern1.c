#include <stdio.h>

int main()
{
    int i , j , n , space = 1;
    n = 5;
   for ( i = 1; i <= n+1; i++)
   {
    printf("%d" , i);
   }
    for ( j = 5; j >= 1; j--)
    {
        printf("%d" , j);
    }
    printf("\n");

    for ( i = n; i > 0; i--)
    {
        for ( j =  1; j <=  i; j++)
        {
            printf("%d" , j);
        }

        for ( j = 0; j < space; j++)
        {
            printf(" ");
        }
        
        for ( j = i; j > 0; j--)
        {
            printf("%d" , j);
        }
     printf("\n");   
     space +=2;
    }
    
   
}