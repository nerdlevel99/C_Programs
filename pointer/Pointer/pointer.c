#include <stdio.h>
int main()
{
    int x = 5;
    int* ptr = &x;
    printf("The value of x is :%d\n" , x);
    printf("The address of x is :%d\n" , &x);
    printf("The address of ptr is :%d\n " , &ptr);

    printf("The value of ptr is : %d\n", ptr);
    printf("The value of *ptr is :%d\n" , *ptr);
    return 0;
}