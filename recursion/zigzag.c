#include <stdio.h>

void zigzag(int n)
{
    if (n==0)
    {
        return;
    }

    else
    {
        printf("%d " , n);
        zigzag(n-1);

        printf("%d " ,n);

        zigzag(n-1);
        
        printf("%d " ,n);
        



    }
    
}

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the number : ");
    scanf("%d" ,&n);
    zigzag(n);
    return 0;
}


