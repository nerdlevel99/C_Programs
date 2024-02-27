#include <stdio.h>

int main()
{
    char a[] = "Hello Abhi sharma is great";

    int i = 0;
    while (a[i] != '\0')
    {
        // printf("%c", a[i]);
        
        // printf("%c", i[a]); 
        // printf("%c", *(i+a)); 

        printf("%c", *(a+i)); 

        i++;
    }

    // Or simply use %s 

    printf("\n\n\n%s"  , a);

    return 0;
}
