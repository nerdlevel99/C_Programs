#include <stdio.h>
#include <string.h>

 typedef struct class
    {
        char Department[100];
        int roll_no;
    }class;
    
void assign(class* a)
{
    (*a).roll_no = 56;
    strcpy((*a).Department , "cse");
}


int main()
{
    class abhi;
    assign(&abhi); 
    printf("%d\n"  ,abhi.roll_no);
    printf("%s"  ,abhi.Department);

    return 0;
}