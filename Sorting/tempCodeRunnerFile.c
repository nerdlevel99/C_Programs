#include <stdio.h>
int main()
{
    int arr[] = {1, 8, 20, 3, 48, 3, 1};
    int size = 7, i, j;
    for (i = 1; i < size; i++)
    {

        for (j = i; arr[j] < arr[j - 1]; j--)
        {
            int temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;
        }
    }

    for (i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}