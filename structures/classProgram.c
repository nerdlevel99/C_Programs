#include <stdio.h>
int main()
{
    struct class
    {
        char name[50];
        int percentage;
        char subject[50];
        int roll_no;
    };

    // struct class person1;

    struct class person1;

    int n, i, j;
    i = 1;

    printf("\n----------------Person %d ----------\n", i + 1);
    printf("Enter the Name for person: ");
    scanf("%[^\n]s", person1.name);
    printf("Enter the roll no of the student: ");
    scanf("%d", &person1.roll_no);
    printf("Enter the percentage of the student: ");
    scanf("%f", &person1.percentage);
    printf("Enter the subject: ");
    scanf(" %[^\n]s", person1.subject);

    
    printf("\n-------Student %d---------\n", i);
    printf("Name of the student : %s\n", person1.name);
    printf("Roll of the student : %d\n", person1.roll_no);
    printf("Percentage of the student : %.2f\n", person1.percentage);
    printf("SUbject  of the student : %s\n", person1.subject);

    return 0;
}