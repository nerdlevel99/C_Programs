#include <stdio.h>
#include <stdio.h>

void print_array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}
int main()
{
    int arr[] = {1, 8, 20, 3, 48, 3, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Before Sorting : ");    
    print_array(arr, size);
    
    for ( int i = 0; i < size; i++)
    {
        for ( int j = 0; j < size-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j +1];
                arr[j+1] = temp;
            }
            
        }
        
    }
    


    printf("Before Sorting : ");
    print_array(arr, size);
    return 0;
}