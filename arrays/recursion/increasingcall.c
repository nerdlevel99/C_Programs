#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n; 
    printf("Enter a number : ");
    scanf("%d" , &n);
    increasing(n);
    return 0;
}

int increasing(int n)
{
    if (n==0)
    return;
    else
    {
        printf("%d\n" , n);
        increasing(n-1);
        printf("%d\n" , n);
    }
    
    
}