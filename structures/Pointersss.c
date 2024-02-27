#include <stdio.h>


void read(int*a  , int*b , int*c )
{
    printf("Enter the values : ");
    scanf("%d %d %d" , a , b, c);
}


void print(int*a  , int*b , int*c )
{
    printf("%d %d %d" ,     *a  , *b , *c);
}


int main()
{
    int a , b , c;
    read(&a , &b , &c);
    print(&a , &b , &c);
    return 0;
}
