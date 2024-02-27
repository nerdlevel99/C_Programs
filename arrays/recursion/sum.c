#include <stdio.h>
int sum(int n);
int sum(int n)
{

    
    if (n == 0)
    {
        return 0 ;
    }

    else 
    {
        
        return n + sum(n-1);
    }
}

int main()
{
    int n = 4;
    printf("%d", sum(n));
    return 0;
}
