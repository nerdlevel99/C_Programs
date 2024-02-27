#include <stdio.h>
int numprint(int a);

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d" , &n);
    printf("The sum of first %d numbers is : %d" , n , numprint(n));
    return 0;
}

int numprint(int a)
{
    int sum , i; 
    for ( i = 0; i < a; i++)
    {
        numprint(a+1);
    }
    return numprint(a);
    
}

