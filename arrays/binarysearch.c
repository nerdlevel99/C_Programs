#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[5] = {1, 2, 5, 6, 8};
    int n = 5, mid, start = 0, end = 4 ;
 
    while (end >= start)
    {
        mid = (start + end) / 2;
        if (arr[mid] == n)
        {
            printf("%d is located at index %d\n", n, mid);
            return 0;
        }
        else if (arr[mid] > n)
            end = mid - 1;
        else
            start = mid + 1;
    }

    printf("%d is not present in the array\n", n);
    return 0;
}
