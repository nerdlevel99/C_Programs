#include <stdio.h>

void duplicatearray(int arr[20], int *size);

int main(int argc, char const *argv[])
{
  int arr[20], i, j, k, size;

  printf("Enter the  size of the array :");
  scanf("%d", &size);

  for (i = 0; i < size; i++)
  {
    printf("Enter the value for element %d : ", i + 1);
    scanf("%d", &arr[i]);
  }

  printf("\nBefore Removing duplicate elements : ");
  for (i = 0; i < size; i++)
    printf("%d\t", arr[i]);

  for  (i = 0; i < size; i++)
  {
    for ( j = i+1; j < size; j++)
    {
      if (arr[i] == arr[j])
      {
        for ( k = j; k < size; k++)
        {
          arr[k] = arr[k+1];
        }
        size--;
        j--;
      }
      
    }
    
  }
  

  printf("\nAfter Removing duplicate elements :  ");
  for (i = 0; i < size; i++)
    printf("%d\t", arr[i]);

  return 0;
}
