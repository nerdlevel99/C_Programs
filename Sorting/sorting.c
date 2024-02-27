#include <stdio.h>

int main()
{
   int arr[] = {5, 7, 7, 1, 8, 0, 37};
   int size = sizeof(arr) / sizeof(arr[0]);
   int i, j, swapped;

   printf("Before sorting: ");
   for (i = 0; i < size; i++)
   {
      printf("%d\t", arr[i]);
   }

   swapped = 0;

   for (i = 0; i < size; i++)
   {
      for (j = 0; j < size - i - 1; j++)
      {
         if (arr[j] > arr[j + 1])
         {
            int temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
            swapped = 1;
         }
         // printf("swapped before loop : " , swapped);
      }

      if (swapped == 0)
      {
         printf("\nThe array is already sorted");
         break;
      }
   }

   printf("\n\nAfter sorting: ");
   for (i = 0; i < size; i++)
   {
      printf("%d\t", arr[i]);
   }

   return 0;
}
