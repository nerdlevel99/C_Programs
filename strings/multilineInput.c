#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    int str[50];

     printf("Enter the string : ");
    scanf("%[^\n]s"  , str);               //
    printf("\n Entered  string is %s  ", str);
    return 0;   
}
