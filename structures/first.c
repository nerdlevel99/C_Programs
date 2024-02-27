#include <stdio.h>
#include <string.h>
int main()
{
    struct class
    {
        int roll_no;
        float percentage;
        char subject[50];
        char name[50];
    };

    struct class person1;
    person1.roll_no = 56;
    person1.percentage= 95.34;
    strcpy(person1.subject ,  "Physics"); 
    strcpy(person1.name ,  "Abhi sharma"); 

    printf(" Name - %s\n" , person1.name);
    printf(" Roll no - %d\n" , person1.roll_no);
    printf(" Percentage - %.2f\n" , person1.percentage);
    printf(" subject - %s\n" , person1.subject);
    
    return 0;
}