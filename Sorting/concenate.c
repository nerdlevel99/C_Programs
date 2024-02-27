#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "C language";
    char str2[] = "is good";
    char str3[150];

    int length1 = strlen(str1);
    int length2 = strlen(str2);

    // Copy characters from str1 to str3
    for (int i = 0; i < length1; i++)
    {
        str3[i] = str1[i];
    }

    // Add a space at the end of str1 in str3
    str3[length1] = ' ';

    // Copy characters from str2 to str3 starting from the position after the space
    for (int i = 0; i < length2; i++)
    {
        str3[length1 + 1 + i] = str2[i];
    }

    str3[length1 + 1 + length2] = '\0'; // Null-terminate str3

    printf("%s\n", str3);

    return 0;
}
