#include <stdio.h>
#include <math.h>
#include <string.h>
#include <windows.h>

void Welcome()
{
    system("color a");
    printf("\n------------------------------------------------------------\n");
    printf("\n I call this my first ever written C language Project\n");
    system("color f");
    printf("\n------------------------------------------------------------\n");
}

unsigned long long factorial(int a)
{
    unsigned long long fact = 1;
    for (int i = 1; i <= a; i++)
    {
        fact *= i;
    }
    return fact;
}

double combination(double n, double r)
{
    double fact, fact1, x, y;
    fact = factorial(n);
    fact1 = factorial(n - r);
    x = factorial(r);
    y = fact1 * x;

    return fact / y;
}

int options()
{
    int choice;
    system("cls");
    printf("Please Make a choice\n1.Probability\n2.Sorting\n3.Shop Calculator\nMatrix Calculator\n4.Data entry\nEnter your choice : ");
    scanf("%d", &choice);
    return choice;
}

float binomial(float p, float n, float x)
{
    float P_x, Q_nx;
    float q = 1 - p;
    P_x = pow(p, x);
    Q_nx = pow(q, n - x);
    float answer = combination(n, x) * P_x * Q_nx;

    return answer;
}

void probability()
{

probability:
    system("cls");
    int choice;
    float mean, variance, sd, n, p, q, x;

    printf("Enter the probablity : ");
    scanf("%f", &p);

    if (p > 1 || p < 0)
    {
        printf("Kindly enter values between 0-1");
    }

    printf("Enter the value of n : ");
    scanf("%f", &n);

// start:
choice:
    printf("\n\nEnter a choice:\n1-Find mean\n2-Find Binomial Probability\n3-Find Poisson 4- Back to probability\n5-Back to start\nEnter your Choice : ");
    scanf("%d", &choice);
    q = 1 - p;

    if (choice == 1)
    {
        mean = n * p;
        variance = n * p * q;
        sd = sqrt(variance);
        printf("\n\n\nMean is %.3f ||\t", mean);
        printf("Variance  is %.3f  ||\t", variance);
        printf("Standard deviation is %.3f ||\t", sd);

        goto choice;
    }
    else if (choice == 2)
    {
        int op;
        float P_x, Q_nx;
        float probability;
        system("cls");
        printf("Enter the random variable (x) : ");
        scanf("%f", &x);
        printf("1- Probability(x=r)\n2-Probability(x<=r)\n3-Probability(x>=r)\n4-Back\tYour choice : ");
        scanf("%d", &op);
        if (op == 1)
        {
            float answer;
            answer = binomial(p, n, x);
            printf("Probability at %.1f is %.2f ", x, answer);
            goto choice;
        }

        else if (op == 2)
        {
            float answer = 0;
            for (int i = 0; i <= x; i++)
            {
                answer += binomial(p, n, i);
            }
            printf("The probabilitity at (x<=r) : %.4f ", answer);
            goto choice;
        }

        else if (op == 3)
        {
            float answer = 0;
            for (int i = x; i <= n; i++)
            {
                answer += binomial(p, n, i);
            }
            printf("The probabilitity at (x>=r) : %.4f \n\n", answer);
            goto choice;
        }
    }

    else if (choice == 3)
    {
        printf("Update soon.........\n");
    }

    else if (choice == 4)
    {
        goto probability;
    }

    else
        options();
}
