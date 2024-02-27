#include <stdio.h>

int main(int argc, char const *argv[])
{
    int marks[5][3];
    int students , subjects , highest  , i , j;

    printf("Enter the number of students : ");
    scanf("%d", &students);

    printf("Enter the number of subjects : ");
    scanf("%d", &marks);


    for (i = 0; i < students; i++)
    {
        for (j = 0; j < subjects; j++)
        {
            printf("Enter the Marks for %d[%d] : ", i + 1, j + 1);
            scanf("%d", &marks[i][j]);
        }
        printf("\n");
    }

    for (j = 0; j < subjects; j++)
    {
        highest = 0;
        
        for (i = 0; i < students; i++)
        {
            if (marks[i][j] > marks[highest][j])
            {
                highest = i;
            }
        }
        
        printf("\nHighest marks in Subject %d is %d obtained by student %d ", j + 1, marks[highest][j], highest + 1);
    }

    return 0;
}
