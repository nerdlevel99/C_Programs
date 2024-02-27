#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i = 5;
    int* ptr = &i;

    printf("%d\n" , ptr);
    printf("%d\n" , &i);
    printf("%d\n" , i);
    printf("%d\n" , *ptr);
    
}
