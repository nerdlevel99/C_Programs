#include <stdio.h>
#include "functions.c"
 
int main()
{
   int choice, n1, n2, arr[30], i;
   int size;
start:


   printf("\n\n1.Shop Calculator\n2.Factorial\n3.Reverse\n4.Armstrong\n5.Highest common factor\n6 Array\n7- Probability calculator\nYour choice : ");
   scanf("%d", &choice);

   if (choice == 1)
   {
      shopkeeper();
   }

   else if (choice == 2)
   {
      printf("Enter the number : ");
      scanf("%d", &n1);
      printf("Factorial of %d is %d", n1, factorial(n1));
   }

   else if (choice == 3)
   {
      printf("Enter the number : ");
      scanf("%d", &n1);
      printf("Reverse of %d is %d", n1, reverse(n1));
   }

   else if (choice == 4)
   {
      printf("Enter the number : ");
      scanf("%d", &n1);
      armstrong(n1);
   }

   else if (choice == 5)
   {
      printf("Enter the number : ");
      scanf("%d %d", &n1, &n2);
      printf("Highest common factor of %d and %d is %d", n1, n2, gcd(n1, n2));
   }

   else if (choice == 6)
   {
      system("cls");

      printf("-----------------------Enter elements for array ------------------------\n");
      printf("Enter the Array size : ");
      scanf("%d", &size);
      for (i = 0; i < size; i++)
      {
         printf("Enter the Element %d : ", i + 1);
         scanf("%d", &arr[i]);
      }

      system("cls");

      printf("1- Bubblesort\n2-Duplicate array\n3-Insert Element\n\nYour Choice : ");
      scanf("%d", &n1);

      if (n1 == 1)
      {
         printf("Given Array : ");
         for (i = 0; i < size; i++)
            printf("%d ", arr[i]);
         bubblesort(arr, &size);
         printf("\nAfter sorting : ");
         for (i = 0; i < size; i++)
            printf("%d ", arr[i]);
      }

      else if (n1 == 2)
      {
         printf("Given Array : ");
         for (i = 0; i < size; i++)
            printf("%d ", arr[i]);
         duplicatearray(arr, &size);
         printf("\nAfter Removing duplicate elements: ");
         for (i = 0; i < size; i++)
            printf("%d ", arr[i]);
      }

      else if (n1 == 3)
      {
         printf("Given Array : ");
         for (i = 0; i < size; i++)
            printf("%d ", arr[i]);

         insertarray(arr, &size);
         printf("\nAfter insertion : ");
         for (i = 0; i < size; i++)
            printf("%d ", arr[i]);
      }
   }


   else if (choice == 7)
   {
       double mean = 0, variance = 0, n = 0, p = 0, q = 0, r = 0, comb = 0 , answer=0;
    int choice = 0;

    system("cls");

    printf("\n\n************************************************************\n");
    printf("*                                                           *\n");
    printf("*               THE PROBABILITY CALCULATOR                  *\n");
    printf("*                                                           *\n");
    printf("*************************************************************\n");
    printf("Enter the probability of success : ");
    scanf("%lf", &p);

    if (p > 1)
    {
        system("cls");

        printf("\033[1;31m"); // set color to bright red
        printf("\n Kindly enter number lower than 1\n");
        printf("\033[0m"); // reset color to default

        goto start;
    }

    printf("Enter the 'n' : ");
    scanf("%lf", &n);

    q = 1 - p;
   //  mean = (int)n*p;
   //  variance = (int)n*p*q;

   //  printf("Mean = %d\nVariance = %d\n" , mean , variance);

    printf("Enter the random variable 'r' : ");
    scanf("%lf", &r);
    printf("\n 1- Probability at %.0f\n 2- Probability of P(r<=%.0f)\n 3 - Probability of P(r>=%.0f)\nYour Choice : " , r , r ,r);
    scanf("%d" , &choice);

    if (choice == 1)
    {
         answer = probability(p , n , r);
        system("cls");

        printf("Probability at %.0f is %.3f " , r , answer);
        
        goto start;
    }

    else if (choice ==2)
    {
        for ( int i = 0; i <= r; i++)
        {
            answer = answer +  probability(p , n , i);
        }
        system("cls");
        
        printf("Probability at %.0f is %.3f  " , r , answer);
        answer = 0;
        goto start;
        
    }

    else if (choice == 3)
    {
         for (int i = r; i <= n; i++)
        {
        answer = answer + probability(p, n, i);
        }


        system("cls");
        // answer = 1-answer;
        printf("Probability at %.0f is %.3f \n" , r , answer);

        answer = 0;

        goto start;
    }
    
    

    return 0;
   }

}
