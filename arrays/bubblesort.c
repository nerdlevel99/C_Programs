#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[10]  , i , j , k , size , temp;
    printf("Enter the size for the array : " );
    scanf("%d" , &size);
    printf("------------------Enter values for array 1 --------------------\n");

   for ( i = 0; i < size; i++)
   {
    printf("enter the element %d of the array : " , i + 1);
    scanf("%d" , &arr[i]);
   }

    
     printf("\nThe Array Before bubble sort is : ");
    for ( i = 0; i < size; i++)
        printf("%d\t" , arr[i]);
    

   for ( i = 0; i < size; i++)
   {
    for ( j = i+1; j < size; j++)
    {
        if (arr[i] > arr[j])
        {
        temp = arr[i];
        arr[i] =arr[j];
        arr[j] = temp;
        }
        
    }
    
   }
   
   
     printf("\nThe Array After bubble sort is : ");
    for ( i = 0; i < size; i++)
        printf("%d\t" , arr[i]);


}
