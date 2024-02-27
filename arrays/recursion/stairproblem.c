#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n , i;
    printf("Enter the number : ");
    scanf("%d" , &n);
    // for (  i = 1; i <= n; i++)
        printf("%d\t" , stair(n));
    
    return 0;
}


int stair(int n)
{
    if (n==1|| n==2)
    {
        return n;
    }
    
    else
    {
        return stair(n-1) + stair(n-2);
    }
}