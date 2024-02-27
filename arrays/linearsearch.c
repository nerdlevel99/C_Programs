#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[20] , size , search , i;

    printf("Enter the size of the array : ");
    scanf("%d" , &size);

    for ( i = 0; i < size; i++)
    {
        printf("Enter the value for Array %d : " , i + 1);
        scanf("%d" , &arr[i]);

    
    }


    printf("\nArray is : ");

    for(i = 0 ; i<size ; i++)
    printf("%d\t" , arr[i]);



    printf("\nEnter The number you want to search : ");
    scanf("%d" , &search);

    for ( i = 0; i < size; i++)
    {
        if (arr[i] == search)
            break;
        
    }
    
    printf("Element %d is presented at location %d" , search , i+1);
    
    return 0;
}
