#include <stdio.h>
int main(int argc, char const *argv[])
{
      int arr[20] ;
    int i , num , element;


    int j ,temp , k , size;
    printf("Enter the size for the array : " );
    scanf("%d" , &size);
    printf("------------------Enter values for array 1 --------------------\n");

   for ( i = 0; i < size; i++)
   {
    printf("enter the element %d of the array : " , i + 1);
    scanf("%d" , &arr[i]);
   }

   printf("Enter the position of your element : ");
   scanf("%d" , &num);

    printf("Enter the element : ");
   scanf("%d" , &element);

    printf("\nArray Before changes is : ");
    for ( i = 0; i < size; i++)
    printf("%d\t" ,arr[i]);

    size++;


    for ( i = num-1; i < size; i++)
    {
        temp = arr[i];
        arr[i] = element;
        element = temp;

    }

    
    printf("\nArray after changes is : ");
    for ( i = 0; i < size; i++)
    printf("%d\t" ,arr[i]);
    

    return 0;
}
