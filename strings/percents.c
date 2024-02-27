#include <stdio.h>

int main()

{
    char str[40];

    // Single word as input
    printf("Enter the string : ");
    scanf("%s", str);                          //
    printf("\nEntered  string is %s  ", str); // only the first word will be considered as the process will stop once it triggers space
}