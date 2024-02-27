#include <stdio.h>

struct date {
    int day;
    int month;
    int year;
};

struct employee {
    char name[50];
    int id;
    struct date hire_date;
};

int main() {
    struct employee emp1 = {"Abhi Sharma", 696969, {9, 29, 2004}};
    printf("Name: %s\n", emp1.name);
    printf("ID: %d\n", emp1.id);
    printf("Hire date: %d/%d/%d\n", emp1.hire_date.month, emp1.hire_date.day, emp1.hire_date.year);
    return 0;
}
