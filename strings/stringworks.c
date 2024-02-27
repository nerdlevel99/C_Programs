#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char abhi[15] = "Abhi";
    char sharma[] = " Abhi";

   printf("\n%d" ,strlen(abhi));

    strcat(abhi , sharma);
    printf("\n%s" , abhi);


    

if (strcmp(abhi , sharma) == 0)
{
    printf("Same string");
}

   printf("\n%d" ,strlen(abhi));

    return 0;
}
