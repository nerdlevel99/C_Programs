#include <stdio.h>

int print(int num);

void main(int argc, char const *argv[])
{
    int n;
    printf("Enter a number : ");
    scanf("%d" , &n);
    print(n);
    // return 0;
}


int print(int num)
{
    if (num == 0)
    {
        return 0;
    }

    else
    {
        printf("%d\n" , num);
        print(num-1);
        // return;
    }
    
    
}