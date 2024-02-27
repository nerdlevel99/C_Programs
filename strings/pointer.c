#include <stdio.h>

int main(int argc, char const *argv[])
{
    char str[] = "lord abhi i bow";
    char *ptr = str;
    printf("%s" , ptr);

    char *ptr1 = &str;


    printf("%s" , ptr1);
    


    return 0;
}
