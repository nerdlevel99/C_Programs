#include <stdio.h>
#include "function.c"

#define ops 4
int main()
{
    Welcome();
    int choice = options();

    if (choice ==1)
    probability();
    
    
    
    return 0;
}