#include <stdio.h>

int main(int argc, char const *argv[])
{
    int array[50] , max , min  , sum = 0;
    float avg;
    int i;
    for ( i = 0; i < 5; i++)
    {
       printf("Enter the number for %d element  : "  , i + 1);
       scanf("%d" ,&array[i]);
       if (array[i]>array[i-1])
        max = array[i];

        if (array[i]<array[i-1])
        min = array[i];

        sum += array[i];
    }

    // number = sizeof(array)/sizeof(array[0]);
    avg =sum/ 5;

    printf("min = %d\nMax = %d\nSum = %d\nAvg = %.2f", min , max  , sum, avg);
    
    return 0;
}
