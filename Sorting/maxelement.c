#include <stdio.h>
#include <limits.h>
int main()
{
    int n , arr[10][10]  , i , j;
   printf("Enter the size of the matrix : ");
   scanf("%d" , &n);


    printf("Enter the matrix : ");
    for ( i = 0; i < n; i++)
   {
    for ( j = 0; j < n; j++)
    {
        scanf("%d" , &arr[i][j]);
    }

   }
    

    //print
   for ( i = 0; i < n; i++)
   {
    for ( j = 0; j < n; j++)
    {
        printf("%d\t" , arr[i][j]);
    }
    printf("\n");
   }

    int max = INT_MIN;
   for ( i = 0; i < n; i++)
   {
   for ( j = 0; j < n; j++)
   {
    if (arr[i][j] > max)
    {
        max = arr[i][j];
    }
    
   }
   
   }
   

   printf("The biggest element is %d" , max);
   

    return 0;
}