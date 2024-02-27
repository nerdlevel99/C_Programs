#include <stdio.h>

int main()
{
    
    
    
    int students , subject  , i , j , sum = 0 , class_sum = 0; 
    float average , class_average;

    printf("Enter the number of students : ");
    scanf("%d" , &students);

    printf("Enter the number of subjects " );
    scanf("%d" , &subject);

    int marks[10][3];
    for ( i = 0; i < students; i++)
    {
        printf("Marks of Student %d : \n" , i + 1);
        for ( j = 0; j < subject; j++)
        {
            printf("Subject %d : " , j+1);
            scanf("%d", &marks[i][j]);
        }
        
    }
    
    printf("\n-----------------------------------------\n");
    
    printf("\nMarks obtained by : ");
    printf("\n-----------------------------------------\n");

    for ( i = 0; i < students; i++)
    {
        printf("\nStudent %d : " , i+1);
        for ( j = 0; j < subject; j++)
            printf("%d   " , marks[i][j]);
        
    }
    
    printf("\n-----------------------------------------\n");

     printf("\n\nTotal Marks obtained by : \n");
    printf("\n-----------------------------------------\n");

    for ( i = 0; i < students; i++)
    {
        sum = 0;
        printf("\n Student %d : " , i+1);
        for ( j = 0; j < subject; j++)
        {
           sum = sum+= marks[i][j];
           class_sum += marks[i][j];

        }
        average = sum/subject;
        class_average = class_sum/students;
        printf("total marks = %d\taverage = %.2f\n" , sum ,  average);
    }


    printf("\n-----------------------------------------\n");
    printf("The class average is %.2f "  , class_average);
    printf("\n-----------------------------------------\n");



    

}