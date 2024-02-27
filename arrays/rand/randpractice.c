#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
   int i, random_number;
  srand(time(NULL));

  char arr[50];
  for ( i = 0; i < 5; i++)
  {
  random_number = rand() % 25;

    arr[i] = 'a' + random_number;

    if (arr[i] =='a' || arr[i] =='i' || arr[i] =='e' || arr[i] =='o' || arr[i] =='u')
    {
        arr[i] ='*';
    }
    
  }


  for ( i = 0; i < 5; i++)
  printf("%c\t" , arr[i]);

  
}
