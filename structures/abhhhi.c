#include <stdio.h>
int main()
{
    int bp , sp ;
    printf("Enter Buying price : ");
    scanf("%d" , &bp);
    printf("Enter Selling price : ");
    scanf("%d" , &sp);

    if (bp>sp)
    {
        printf("we got a loss of : %d" , sp-bp);
    }

    else if (bp<sp)
    {
        printf("we got a gain of : %d" , sp-bp);
    }
    

    return 0;
}