#include <stdio.h>

int main()
{
    char string[100];
    char vowel[] = "aeiou";
    int size = 0  , i = 0 , count = 0;


    printf("Enter the string : ");
    scanf("%[^\n]s" , string);

    printf("\n String before removing all spaces :%s " , string);


    while(string[i]!='\0')
    {
        size++;
        i++;
    }

  for ( i = 0; i < size; i++)
  {
    if (string[i] == ' ')
    {
       for ( int j = i; j < size; j++)
       {
        string[j] = string[j+1];
       }
       
       size--;
    }
    
  }
  
       
    
    printf("\n String after removing all spaces :%s " , string);
}