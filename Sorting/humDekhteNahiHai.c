#include <stdio.h>
#include <windows.h>

#include <stdio.h>
int main()
{
    int choice;
    start:
    printf("\n----------------------------------------------");
    printf("\n1 - Create text file\n2- Create Folder\n3-Change Color\n4- List Directory\nYour Choice :  ");
    scanf("%d" , &choice);

    if (choice == 1)
    {
    system("type nul >  abhi.c");
    goto start;

    }

    else if (choice ==3)
    {
       system("color a");
    goto start;

    }

    else if (choice ==2)
    {
        system("mkdir abhi");
    goto start;

    }
    
    else if (choice == 4)
    {
        system("dir");
        goto start;
    }
    
    
    
    return 0;
}