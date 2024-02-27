#include <stdio.h>
 
int main(int argc, char const *argv[])
{
    char str[40];
    printf("Enter the string : ");
    scanf("%[^\n]s" , str);

    int i = 0 , size =0  , j;
    while (str[i] !='\0')
    {
        size++;
        i++;
    }
    
    for (i = 0 , j = size-1; i<=j; i++ , j-- )
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        
    }
    
    printf(" The entered string is %s" , str );
    return 0;
}
