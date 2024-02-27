#include <stdio.h>
#include <string.h>

typedef struct Class
{
    char name[50];
    int roll_no;
    int student_id;
    float percentage;
} class;

void read(class* a)
{
    printf("Enter name: ");
    scanf("%s", a->name);
    printf("Enter roll no: ");
    scanf("%d", &(a->roll_no));
    printf("Enter student ID: ");
    scanf("%d", &(a->student_id));
    printf("Enter percentage: ");
    scanf("%f", &(a->percentage));
}

void print_structure(class *a)
{
    printf("Name : %s\n" , a->name);
    printf("Roll No : %d\n" , a->roll_no);
    printf("Student Id : %d\n" , a->student_id);
    printf("Percentage : %.2f\n" , a->percentage);
    printf("\n--------------------------------------------\n");
}

void change(class *a)
{
    char new_name[100];
    int roll_no , std_id;
    float percentage;
    printf("Enter the new name : ");
    scanf(" %[^\n]s" , new_name);
    printf("Enter the new Roll_no : ");
    scanf("%d" , &roll_no);
    printf("Enter the new Student id  : ");
    scanf("%d" , &std_id);
    printf("Enter the percentage : ");
    scanf("%f" , &percentage);

    strcpy(a->name , new_name );
    a->roll_no = roll_no;
    a->percentage = percentage;
    a->student_id = std_id;
}

int main()
{
    class arr[10] = {
        {"Abhi Sharma", 56, 25, 99.9},
        {"Abhi Sharma", 56, 25, 99.9},
        {"Abhi Sharma", 56, 25, 99.9},
        {"Abhi Sharma", 56, 25, 99.9},
        {"Abhi Sharma", 56, 25, 99.9},
        {"Abhi Sharma", 56, 25, 99.9}
    };
    int i;
    // int n;
    // printf("Enter the number of students: ");
    // scanf("%d", &n);
    // for (i = 0; i < n; i++)
    // {
    //     printf("Enter data for student %d:\n", i+1);
    //     read(&arr[i]);
    // }

    for (i = 0; i < 5; i++)
    {
        print_structure(&arr[i]);
    }

    int index;
    printf("Enter the index for the Structure you want to change : ");
    scanf("%d", &index);


    
    change(&arr[index]);

    

    for (i = 0; i < 5; i++)
    {
        print_structure(&arr[i]);
    }
     
    return 0;
}
