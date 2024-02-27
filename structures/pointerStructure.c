#include <stdio.h>
#include <string.h>
int main()
{
     typedef struct class
    {
        int roll_no;
        int no;
        char Department[100];
    }class;

    class abhi;
    class* a = &abhi;

    (*a).roll_no = 50;
    (*a).no = 60;

    printf("%d\n" , abhi.roll_no);
    printf("%d\n" , abhi.no);
    return 0;
}