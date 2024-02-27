#include <stdio.h>

int main()
{
    int arr1[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 500};
    int arr2[] = {2, 4, 6, 8, 10, 12, 14};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int i = 0, j = 0, k = 0;

    int merged_arr[n1 + n2];

    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
        {
            merged_arr[k] = arr1[i];
            i++;
            k++;
        }

        else
        {
            merged_arr[k] = arr2[j];
            k++;
            j++;
        }
    }

    while (j < n2)
    {
        merged_arr[k] = arr2[j];
        j++;
        k++;
    }

    while (i < n1)
    {
        merged_arr[k] = arr1[i];
        i++;
        k++;
    }

    for (i = 0; i < n1 + n2; i++)
    {
        printf("%d\t", merged_arr[i]);
    }

    return 0;
}
