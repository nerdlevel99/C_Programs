#include <stdio.h>
int main()
{
    int age;
    char newname[50];
    printf("Enter the name for player %d :  " , 1);
        scanf("%[^\n]s" , newname);
        printf("Enter the age for %s : " , newname);
        scanf("%d", age);
        
    return 0;
}