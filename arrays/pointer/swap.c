#include <stdio.h>
void swap(int *a , int* b);
int main(int argc, char const *argv[])
{
    int a = 5 , b = 6;
    printf("Before swapping\na=%d\tb=%d" , a , b);
    swap(&a , &b);
    printf("\nAfter swapping\na=%d\tb=%d" , a , b);

    return 0;
}

void swap(int *a , int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

}
