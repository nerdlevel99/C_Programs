#include <stdio.h>
int power(int n, int p)
{

    int previouspower;
    if (p == 0)
    {
        return 1;
    }

    else if (p != 0)
    {
        int previouspower = power(n, p - 1);
        return n * previouspower;
    }
}

int main()
{
    int n = 4;
    printf("%d", power(n, 3));
    return 0;
}
