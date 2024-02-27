 #include <stdio.h>
 
 int main()
 {
 int arr[10][10], i, j, row, column;
    int arr2[10][10], sum=0;

    printf("Enter the size for rows of the array : ");
    scanf("%d", &row);

    printf("Enter the size for the column : ");
    scanf("%d", &column);

    printf("\n----------first array-------------");

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("Enter the value for arr[%d][%d] : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < column; j++)
        {
            sum = sum + arr[i][j];
        }
        
    }
    
    printf("Total sum is %d" , sum);
 }