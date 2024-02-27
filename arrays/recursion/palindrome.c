#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    int rev = reverse(num);
        printf("%d is a palindrome number "  , rev);
   
    
    return 0;
}


int reverse(int num)
{
  
  if (num > 0)
  {
        
        return 10* (num%10) +  reverse(num/10)*10;
    
  }
  
  else
  {
    return 0;
  }

}
