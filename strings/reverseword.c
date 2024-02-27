#include <stdio.h>

int main(int argc, char const *argv[])
{
    char str[40];
    int words = 1;
    printf("Enter the string : ");
    scanf("%[^\n]s", str);
 
    int i = 0, size = 0, j;
    while (str[i] != '\0')
    {
        if (str[i] == 32)
        {
            words++;
        } 
        i++;
    }

    printf("Entered words are : %d", words);

    for (i = 0; i < size; i++)
    {
        
    }

    return 0;
}
   