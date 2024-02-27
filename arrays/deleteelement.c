#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[] ={1 , 2 , 3 , 4 , 5 , 6};
    int size = sizeof(arr)/sizeof(0);
    int i , num;


    printf("Enter the number of element you want to delete : ");
    scanf("%d" , &num);
    for ( i = num-1; i < size; i++)
    {
        arr[i] = arr[i+1];
    }
    
    size--;

    for ( int i = 0; i < size; i++)
      printf("%d" , arr[i]);
    
    
    return 0;
}
