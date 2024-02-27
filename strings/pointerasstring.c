#include <stdio.h>
int main(int argc, char const *argv[])
{
    char str[] =" Lord abhi";
    char* ptr = str;
    *ptr = "Lord abhi But new";
    printf("%s" , str);
    return 0;
}
  