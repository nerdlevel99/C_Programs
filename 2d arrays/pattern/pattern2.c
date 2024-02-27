#include <stdio.h>

int main()
{
    int i , j , n , space = 1;
    n = 5;
   for ( i = 1; i <= n+1; i++)
   {
    printf("*");
   }
    for ( j = 5; j >= 1; j--)
    {
        printf("*");
    }
    printf("\n");

    for ( i = n; i > 0; i--)
    {
        for ( j =  1; j <=  i; j++)
        {
            printf("*" );
        }

        for ( j = 0; j < space; j++)
        {
            printf(" ");
        }
        
        for ( j = i; j > 0; j--)
        {
            printf("*");
        }
     printf("\n");   
     space +=2;
    }
    
   
}