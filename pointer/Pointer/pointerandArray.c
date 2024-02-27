#include <stdio.h>
int main()
{
    int arr[10] = {1 ,2 , 3, 4, 5};
    int* ptr;
    ptr = arr;
    printf("Dereferncing Values \n");
    printf("%d\n" , *ptr);
    printf("%d\n" , *(ptr+1));
    printf("%d\n" , *(ptr+2));
    printf("%d\n" , *(ptr+3));
    // it's simply happening , cause we are adding +1 to the address 
    // and +1 integer adds 4 bytes to the address and arrays are stored in memories 
    // as their consecutive memory blocks

    printf("adress values Values \n\n");
    printf("%d\n" , ptr);
    printf("%d\n" , (ptr+1));
    printf("%d\n" , (ptr+2));
    printf("%d\n" , (ptr+3)); 

    printf("Adress values Values \n\n");
    printf("%d\n" , &arr[0]);
    printf("%d\n" , &arr[1]);
    printf("%d\n" , &arr[2]);
    printf("%d\n" , &arr[3]);
    printf("%d\n" , &arr[4]);
    
    return 0;
}