
// Abhi sharma - 56

#include <stdio.h>


void swap(int arr[] , int size )
{
    int highest = 0  , smallest = 0 , i ;
    for ( i = 0; i < size; i++)
    {
        if (arr[i] >= arr[i+1])
            highest = i;

        if (arr[i]<=arr[i+1])
           smallest = i;
        
    }
    
    int temp = arr[highest];
    arr[highest] = arr[smallest];
    arr[smallest] = temp;
    
}


int main(int argc, char const *argv[])
{
    int arr[10]  , i , size;

   printf("Enter the size of the array : ");
   scanf("%d" , &size);

   for ( i = 0; i < size; i++)
   {
    printf("Enter the element %d : " , i + 1);
    scanf("%d" , &arr[i]);
   }
   


    printf("\nBefore swapping : ");

    for ( i = 0; i < size; i++)
        printf("%d\t" , arr[i]);
    
   swap(arr , size);
    
    printf("\nAfter swapping : ");

    for ( i = 0; i < size; i++)
        printf("%d\t" , arr[i]);
    
    
    return 0;
}
