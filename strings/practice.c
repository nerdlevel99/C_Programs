#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
     char str[50];
    char old , new;
    printf("Enter the string  : ");
    scanf("%[^\n]s" , str );

    printf("enter the old character : ");
    scanf(" %c" , &old);

    printf("enter the old character : ");
    scanf(" %c" , &new);



    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == old)
        {
            str[i] = new;
        }
        
    }

    printf("%s" , str);
    
    return 0;
}
