#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, char const *argv[])
{
    int i , b , c;
     srand(time(NULL));

    i = rand() % 5;

    printf("%d" ,i);
    return 0;
}
