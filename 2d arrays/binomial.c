#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int factorial(int n);
double combination(double n, double r);
double probability(double p, double n, double r);

int main(int argc, char const *argv[])
{
    double mean = 0, variance = 0, n = 0, p = 0, q = 0, r = 0, comb = 0 , answer=0;
    int choice = 0;

start:
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
        
        printf("Probability at %.0f is %.3f " , r , answer);
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

double combination(double n, double r)
{
    double fact, fact1, x, y;
    fact = factorial(n);
    fact1 = factorial(n-r);
    x = factorial(r);
    y = fact1 * x;

    return fact /y;
}

int factorial(int n)
{
    int fact = 1, i;
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

double probability(double p, double n, double r)
{
    double value, q;
    q = 1 - p;
    value = combination(n, r) * pow(p, r) * pow(q, n-r);
    return value;
}
