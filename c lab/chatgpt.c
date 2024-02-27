#include <stdio.h>

void get_marks(int marks[][3], int num_students) {
    // loop through each student and test to get their marks
    for (int i = 0; i < num_students; i++) {
        printf("Enter marks for student %d:\n", i+1);
        for (int j = 0; j < 3; j++) {
            printf("Test %d: ", j+1);
            scanf("%d", &marks[i][j]);
        }
    }
}

void print_marks(int marks[][3], int num_students) {
    // print the marks obtained by each student in different subjects
    printf("\nMarks obtained by each student in different subjects:\n");
    for (int i = 0; i < num_students; i++) {
        printf("Student %d: ", i+1);
        for (int j = 0; j < 3; j++) {
            printf("%d ", marks[i][j]);
        }
        printf("\n");
    }
}

void print_total_and_average(int marks[][3], int num_students) {
    // calculate total marks and average obtained by each student
    int total_marks[num_students];
    float avg_marks[num_students];
    for (int i = 0; i < num_students; i++) {
        total_marks[i] = 0;
        for (int j = 0; j < 3; j++) {
            total_marks[i] += marks[i][j];
        }
        avg_marks[i] = (float)total_marks[i] / 3;
    }

    // print total marks and average obtained by each student
    printf("\nTotal marks and average obtained by each student:\n");
    for (int i = 0; i < num_students; i++) {
        printf("Student %d: Total marks = %d, Average marks = %.2f\n", i+1, total_marks[i], avg_marks[i]);
    }
}

void print_class_average(int marks[][3], int num_students) {
    // calculate and display the class average
    int class_total = 0;
    for (int i = 0; i < num_students; i++) {
        for (int j = 0; j < 3; j++) {
            class_total += marks[i][j];
        }
    }
    float class_avg = (float)class_total / (num_students * 3);
    printf("\nClass average = %.2f\n", class_avg);
}

int main() {
    // define the number of students
    const int num_students = 10;

    // initialize an empty 2D array to store the marks
    int marks[num_students][3];

    // get the marks for each student
    get_marks(marks, num_students);

    // print the marks obtained by each student in different subjects
    print_marks(marks, num_students);

    // print total marks and average obtained by each student
    print_total_and_average(marks, num_students);

    // calculate and display the class average
    print_class_average(marks, num_students);

    return 0;
}
