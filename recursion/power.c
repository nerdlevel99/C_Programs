#include <stdio.h>

long long int power(int num , int raiseTo)
{
    if (num==0||num==1)
    {
        return 1;
    }
    
    else
    return num*factorial(num-1);
}
int main()
{
    int num;
    printf("Enter the num : ");
    scanf("%d" , &num);

    printf("Factorial of %d is %lld " , num , power(num));
    return 0;
}