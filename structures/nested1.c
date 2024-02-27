#include <stdio.h>
int main()
{
    typedef struct Dob
    {
        int date;
        int month;
        int year;
    }dob;

    typedef struct Person
    {
        char name[50];
        int P_id;
        dob Birthday;

    }Person;

    typedef struct class
    {
        Person p;
        int roll_no;
        int student_id;

    }class;

    class C = {{"Abhi sharma", 56 ,{29, 9 , 2004}} , 56 , 25};
    printf("Name - %s\n dob : %d-%d-%d\nP-ID: %d\n Roll No: %d\nStudent Id : %d" , C.p.name , C.p.Birthday.date , C.p.Birthday.month , C.p.Birthday.year , C.p.P_id , C.roll_no , C.student_id);
    // return 0;
}