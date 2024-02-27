#include <stdio.h>
#include <string.h>
int main()
{
    typedef struct class
    {
        char name[50];
        int roll_no;
        float percentage;
    }class;

    class arr[3];

    strcpy(arr[0].name , "Abhi Sharma");
    arr[0].percentage = 99.9;
    arr[0].roll_no = 56;

     strcpy(arr[2].name , "Muskan Mahajan");
    arr[1].percentage = 41;
    arr[1].roll_no = 1;

     strcpy(arr[1].name , "Khushi Sharma");
    arr[2].percentage = 42;
    arr[2].roll_no = 1;

 for (int  i = 0; i < 3; i++)
 {
    printf("\n------------------------------------------\n");
    printf("Name - %s\n" , arr[i].name);
    printf("Percentage - %.2f%%\n" , arr[i].percentage);
    printf("Roll No - %d\n" , arr[i].roll_no);
 }

 

    
    return 0;
}