#include <stdio.h>

int main()
{
    char string[100];
    char vowel[] = "aeiou";
    int size = 0  , i = 0 , count = 0;

    printf("Enter the string : ");
    scanf("%[^\n]s" , string);

    while(string[i]!='\0')
    {
        size++;
        i++;
    }

    for ( i = 0; i < size; i++)
    {
       for ( int j = 0; j < 5 ; j++)
        if (string[i] == vowel[j])
            count++;
        
    }
       
    
    printf("Number of vowels in %s is %d "  , string , count);
}