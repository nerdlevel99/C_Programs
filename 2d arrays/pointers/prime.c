#include <stdio.h>
int main()
{
    int num = 9 , flag =0 , i;

    for ( i = 2; i < num; i++)
    {
        if (num%i==0)
        {
            flag = 1;
        }
        
    }

    if (flag == 0)
    {
        printf("prime");
    }
    else
        printf("not prime");

    
    return 0;
}