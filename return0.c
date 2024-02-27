#include <stdio.h>

int function(int n)
{
    if (n==0)
    {
        return 0 ;
    }

    else{
        return n + function(n-1);
    }
    
}


int main()
{
    printf("%d" , function(5));
    return 0;
}

