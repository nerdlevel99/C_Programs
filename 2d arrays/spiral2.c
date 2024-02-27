#include <stdio.h>

// Generate a n*n matrix filled with spiral order elements
int main(int argc, char const *argv[])
{
    int maxrow , minrow=0, maxcol , mincol=0 ;  
    int i  , j , arr[3][3]= { { 1 , 2,3} , { 4 , 5, 6} , { 7 , 8  , 9}} , n;

    printf("Enter the n : ");
    scanf("%d" , &n);

        maxrow = n-1;
        minrow = 0;
        maxcol = n-1;
        mincol = 0;
        int elements = n*n;
        int number = 1;
        int list[elements];

        
    int count = 1;
    while (count<elements+1)

    {
         for ( j = mincol; j <= maxcol; j++)
        {
            list[count] = arr[minrow][j];
            count++;

        }

            minrow++;

        for ( i = minrow; i <= maxrow; i++)
        {
            list[count] = arr[i][maxcol];
            count++;

        }

            maxcol--;

        for ( i = maxcol; i >= mincol; i--)
        {
           list[count] = arr[maxrow][i];
            count++;

        }

            maxrow--;


         for ( j = maxrow; j >=minrow ; j--)
        {
            list[count] = arr[j][mincol];
            count++;

        }

        
        mincol++;

        

        
    }

   int k = 5;
   printf("%d " , list[k-1]);
    
    
    
    
    return 0;
}
