#include <stdio.h>
int main()
{
    int x = 5;
    int *p = &x;
    int **p1 = &p;
    int ***p2 = &p1;
    int ****p3 = &p2;

    printf("%d\n", ****p3);
    printf("%d\n", ***p2);
    printf("%d\n", **p1);
    printf("%d\n", *p);

    printf("%d\n", p);
    printf("%d\n", *p1);
    printf("%d\n", **p2);
    printf("%d\n", p3);
    return 0;
}