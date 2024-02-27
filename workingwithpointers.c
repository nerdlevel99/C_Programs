#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, i;
    float sum = 0, temp = 0, square;
    printf("Enter a number : ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        square = i * i;
        printf("%.0f/%d + ", square, i);

        temp = square / i;
        sum = sum + temp;
    }

    printf("= %.3f", sum);

    return 0;
}
