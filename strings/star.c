#include <stdio.h>

int main(int argc, char const *argv[])
{
    char* ptr = "Abhi sharma";
    printf("%s", ptr);

    // *ptr = "Changed value";

     char ptr2 = "\nUnchanged value";
    printf("%s", ptr2);

    ptr2 = "hello world";
    printf("\n%s", ptr2);
   
    return 0;
}
