#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    int i =25;
    int* ptr = &i;
    int** ptr1 = &ptr;
    int*** ptr2 = &ptr1;

    printf("%d\n" , *ptr);
    printf("%d\n" , **ptr1);
    printf("%d\n" , ***ptr2);
    
}
