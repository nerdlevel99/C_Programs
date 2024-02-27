#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int n , i;
    int *arr;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    srand(time(NULL));
    arr = (int *)malloc(n * sizeof(int));
    for ( i = 0; i < n; i++)
    {
        arr[i] = rand() % (1000 - 100 + 1) + 100;
    }

    printf("The array is : ");
    for ( i = 0; i < n; i++)
    {
        printf("%d\t" , arr[i]);
    }
    
   
    
    return 0;
}