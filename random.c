#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char const *argv[])
{
    int a , b , c;
    srand(time(NULL));


    a = rand()%100 + 50;
    b = rand()%10 + 5;
    c = rand()%300 + 1;
    printf("%d\t%d\t%d\t" , a , b, c);
}

