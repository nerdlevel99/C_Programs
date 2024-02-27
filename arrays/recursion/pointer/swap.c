#include <stdio.h>

int main(int argc, char const *argv[])
{
    int* a = 5;
    int*b = 6;
    int temp;
    printf("Before swapping :\na = %d\tb = %d" , a , b);
    temp = *a;
    *a=*b;
    *b = temp;
    printf("Before swapping :\na = %d\tb = %d" , a , b);

    return 0;
}
