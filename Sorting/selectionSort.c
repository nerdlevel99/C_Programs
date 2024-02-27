#include <stdio.h>
int main()
{
    int index , arr[] = {5,4,3,2,1} ;
    int i , j , min;
    int size = sizeof(arr)/sizeof(arr[0]);
   
        
       for ( i = 0; i < size; i++)
       {
        index = i;
        for ( j = i+1; j < size; j++)
        {
            if (arr[j]<arr[index])
            {
                index = j;
            }
            
        }
        
        int temp = arr[index];
        arr[index] = arr[i];
        arr[i] = temp;
       }
       
    

    printf("Array is : ");
    for ( i = 0; i < size; i++)
    {
        printf("%d\t" , arr[i]);
    }
    
    return 0;
}