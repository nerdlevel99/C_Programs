#include <stdio.h>
int main()
{
    int rem , n , bin[10];
    for(i=0; n>0; i++)
    {
        rem = n%2;
        n/=2;
        bin[i] = rem;
    }

    for(i=n; i>0; i--)
    {
        printf("%d" , bin[i]);
    }
    return 0;
}