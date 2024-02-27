#include <stdio.h>

void swap(int *a , int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}


void printarray(int arr[] , int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    
}
void selectionSort(int *arr, int n)
{
    int i , min_num , j  , temp;
    for (i= 0;   i< n-1; i++)
    {
        min_num = i;
        for ( j = i+1; j < n; j++)
        {
            if (arr[j] < arr[min_num])
            {
               min_num = j;
            }
            
        }

        swap(&arr[i] , &arr[min_num]);
        
    }
    
}

int main()
{
    int arr[] = { 1 , 2, 5 , 9 , 50 ,7 , 19 };
    int size = sizeof(arr)/sizeof(arr[0]);
    printarray(arr , size);
    selectionSort(arr , size);
    printf("After Bubble sort : \n");
    printarray(arr , size);

    
    
    return 0;
}