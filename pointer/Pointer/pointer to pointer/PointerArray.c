#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[4] = {1 , 2, 3 , 4};
    int x = 5;
    int *parr[3];
         parr[1] =&arr[1];
         parr[2] = &x; 
         parr[3] =&arr[3];

    printf("%d\n" , *parr[1]); 
    printf("%d\n" , *parr[2]); 
    printf("%d\n" , *parr[3]); 
}

