#include <stdio.h>
#include <string.h>
 


void reverse (char str[])
{   
    int size = strlen(str);

    for (int i = 0  , j = size-1; i<=j; i++ , j-- )
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        
    }

}

int main(int argc, char const *argv[])
{
    char str[40]; 
    char rev[40];
    int size , i , j;
    printf("Enter the string : ");
    scanf("%[^\n]s" , str);

    // char rev[40];/
    strcpy(rev , str);

    reverse(str);

    if (strcmp(str , rev) ==0)
    {
        printf("%s is palindrome Guys " , str);
    }
    
    else
    {
        printf("%s is not so palindrome Guys " , rev);
        
    }
    
   

    return 0;
}
