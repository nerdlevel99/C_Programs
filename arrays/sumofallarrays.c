#include <stdio.h>

int main(int argc, char const *argv[])
{

    int arr[] ={1 , 2 , 3 , 4 , 5 , 6};
    int size = sizeof(arr)/sizeof(0);
    int i , sum = 0;

    for ( i = 0; i < size; i++)
    { 
        sum = sum + arr[i];
    }
    
    printf("%d" , sum);



    return 0;
}
