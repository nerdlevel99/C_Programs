#include <stdio.h>

int main(int argc, char const *argv[])
{
    /****** Add or Subtract integer from a pointer *****/
	/*int arr[]={1,2,3,4,5};// 1 2 -1 4 5  //1 2 -1 0 5 // 1 1 -1 0 5
	int *ptr,i;
	ptr = &arr[2];
	*ptr = -1;
	*(ptr + 1) = 0;
	*(ptr - 1) = 1;
	printf("\n Array is: ");
	for(i=0;i<5;i++)
		printf(" %d", *(arr+i));*/

	// /*********Subtraction of two pointer variables *********/
	// int arr[] = {1,2,3,4,5,6,7,8};
	// int *ptr1, *ptr2;
	// ptr1 = arr;
	// ptr2 = ptr1 + 2;
	// printf("%d", ptr2- ptr1);

   	/******** Applying relational operators in pointers ************/
	int arr[] = {1,2,3,4,5,6,7,8};
	int *ptr1, *ptr2;
	ptr1 = arr;
	ptr2 = &arr[7];
		printf("%d \n", *ptr1);

	while(ptr1<=ptr2)
	{
		printf("%d \n", *ptr1);
		ptr1++;
	}
	return 0;
}
