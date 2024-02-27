#include <stdio.h>
int main()
{
    typedef struct class
    {
       int roll_no;
       int student_id;
       float percentage;
       char name[50];

    } class;
    

    class C = { 1 , 47 , 99.9 , "Aitrika Chakarborty"};

    printf("Name : %s\nPercentage : %.2f\nRoll No: %d\nStudent-id : %d" ,C.name , C.percentage , C.roll_no , C.student_id);
    return 0;
}