#include <stdio.h>
#include <string.h>

void change_letter(char str[] , char old , char new)
{
    int size = strlen(str);
    int i , j;

    for ( i = 0; i < size; i++)
    {
        if (str[i] == old)
            str[i] = new;
        
    }
    
}


int main(int argc, char const *argv[])
{
    char str[40];
    char temp[40];
    char old;
    char new;

    printf("Enter the string : ");
    scanf("%[^\n]s" , str);

    printf("Enter the word you want to change in  : ");
    scanf(" %c" , &old);

    printf("Enter the word you want to change it with : ");
    scanf(" %c" , &new);


    change_letter(str , old , new);

    printf("New string : %s" , str);

    return 0;
}

