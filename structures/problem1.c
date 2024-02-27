#include <stdio.h>
#include <string.h>
int main()
{
    int i , num ;
    typedef struct cricketer
    {
        char name[20];
        int age;
        int runs;
        int test_matches;
        
    }cricketer;

    cricketer arr[5];
    char newname[50];


    printf("\nEnter the number of cricketers : ");
    scanf("%d" , &num);

    for ( i = 0; i < num; i++)
    {
        printf("\n--------------------------------------\n");

        printf("Enter the name for player %d :  " , i+1);
        scanf(" %[^\n]s", newname);

        strcpy(arr[i].name , newname);


        printf("Enter the age for %s : " , arr[i].name);
        scanf("%d", &arr[i].age);

        printf("Enter the no. of test matches played by %s : " , arr[i].name);
        scanf("%d", &arr[i].test_matches);

        printf("Enter the runs hit by %s : " , arr[i].name);
        scanf("%d", &arr[i].runs);
        printf("\n--------------------------------------\n");

        
    }

    for ( i = 0; i < num; i++)
    {
        printf("\n--------------------------------------\n");
        printf("\nName - %s "  , arr[i].name);
        printf("\nAge - %d "  , arr[i].age);
        printf("\nTest Matches - %d "  , arr[i].test_matches);
        printf("\nRuns - %d "  , arr[i].runs);
        printf("\n--------------------------------------\n");
    }
    
    


    return 0;
}