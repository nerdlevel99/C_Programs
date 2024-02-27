#include <stdio.h>
#include <string.h>
#include <ctype.h>

void uppercase(char str[])
{

    int i = 0;
    int size = strlen(str);

    for (i = 0; i < size; i++)
        str[i] = toupper(str[i]);

}

void first_letter(char str[])
{

    int i = 0;
    int size = strlen(str);

    for (i = 0; i < size; i++)
        if (i == 0 || str[i-1] == ' ')
        {
            str[i] = toupper(str[i]);
            continue;
        }

       str[i] = tolower(str[i]);
        
}



int main(int argc, char const *argv[])
{
    char str[40];
    char temp[40];
    int size, i, j;
    printf("Enter the string : ");
    scanf("%[^\n]s", str);

    printf("\nEntered String : %s", str);

    first_letter(str);
    
    printf("\n First letter  String : %s", str);

    
    uppercase(str);
    printf("\nUppercase String : %s", str);

    
    

    return 0;
}

