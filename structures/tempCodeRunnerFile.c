#include <stdio.h>
#include <string.h>

 typedef struct class
    {
        char Department[100];
        int roll_no;
    }class;


void check(class a , class b)
{
    if (strcmp(a.Department , b.Department) == 0 )
    {
        printf("They both are from same department ");
    }

    else
    {
        printf("Different Department Found !!!");
    }
    
    
}

int main()
{
    class s1 , s2;
    strcpy(s1.Department , "CSE");
    s1.roll_no = 1;

    
    strcpy(s2.Department , "CE");
    s1.roll_no = 56;

    check(s1 , s2);
    
    return 0;
}