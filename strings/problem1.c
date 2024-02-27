#include <stdio.h>
#include <string.h>

int main()
{
    int i, j;
    char temp;
    char str[800] = "Oh bro you're so great to be alive";
    int length_str = strlen(str);
    int start = 3;
    char insert[500];




    printf("Enter the string: ");
    // scanf("%[^\n]s" ,insert );
    gets(insert);
    int length = strlen(insert);



    printf("%d\n", length);
    j = length_str - start;
    for (i = length_str - 1; i >= start; i--)
    {
        str[i + length] = str[i];
    }
    for (i = start; i < start + length; i++)
    {
        str[i] = insert[i - start];
    }
    printf("%s\n", str);
    return 0;
}
