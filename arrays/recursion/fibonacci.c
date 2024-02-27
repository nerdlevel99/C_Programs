#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n , i;
    printf("Enter the number : ");
    scanf("%d" , &n);
    for (  i = 1; i <= n; i++)
        printf("%d\t" , fibo(i));
    
    return 0;
}


int fibo(int n)
{
    if (n==1|| n==2)
    {
        return 1;
    }
    
    else
    {
        return fibo(n-1) + fibo(n-2);
    }
}