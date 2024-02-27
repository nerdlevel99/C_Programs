#include <stdio.h>
int main(int argc, char const *argv[])
{
    char str[] = "Abhi Sharma";
    char *ptr = str;
    
    str[0] = 'M';
    printf("%s" , ptr);

    return 0;
}
