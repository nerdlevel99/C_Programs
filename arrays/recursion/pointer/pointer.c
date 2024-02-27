#include <stdio.h>

int main(int argc, char const *argv[])
{
    int abhi = 20;
    int* point = &abhi;


    printf(" point = %d\n" , point);
    printf("*point = %d\n" , *point);
    printf("&abhi = %d\n" , &abhi);
    printf("&point = %d\n" , &point);
    printf("P point = %p\n" , point);
    printf("P point = %p\n" , &abhi);
    printf("P point = %p\n" , *point);

    return 0;
}
