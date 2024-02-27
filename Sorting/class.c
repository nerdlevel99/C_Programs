#include <stdio.h>
#include <string.h>
void compare(char * str1 , char * str2)
{
    int lenght1 = strlen(str1);
    int lenght2 = strlen(str2);
    int count =0;

    if (lenght1 != lenght2)
    {
            printf("The given string is not equal");
    }

    else
            for ( int i = 0; i < lenght1; i++)
            {
                if (str1[i] == str2[i])
                {
                    // printf("The given string is equal");
                    count++;

                }

              
                
            }
            

            if (count == lenght1)
            {
                printf("GIven strings are same ");
            }

            else
            {
                printf("GIven strings are not same but have same length ");

            }
            
            

    
    
}
int main()
{
    char str1[] = "Hello i am aaaa sharma and this is nice";
    char str2[] = "Hello i am abhi sharma and this is nice";

    compare(&str1 , &str2);
    return 0;
}