#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[3][3] = {{1 , 2 , 3} ,{4 , 5 , 6} ,{7 , 8 , 9} };
    int i , j, k;
    int n=3;

    for ( i = 0; i < 3; i++)
    {
        
            
                if (i%2==0)
                for ( j = 0; j < 3; j++)
                printf("%d  " , a[i][j]);


               else
               {
                    for ( j = n-1; j >= 0 ; j--)
                    {
                printf("%d  " , a[i][j]);

                    }
                    
               }
               
                
        
            
    
        
    }
    
    
    return 0;
}
