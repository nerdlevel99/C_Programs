#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

char *ones[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
char *tens[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
char *teens[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
int shopkeeper();

int multiply(int a, int b);

double factorial(int n)
{
    double fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *=i;
        return fact;
    }
    
}



int digits(int a)
{
    static int m;
    while (a > 0)
    {
        a /= 10;
        m++;
    }

    return m;
}

int reverse(int a)
{
    static int m;
    int rem;
    while (a > 0)
    {
        rem = a % 10;
        m = (m * 10) + rem;
        a /= 10;
    }

    return m;
}

int armstrong(int a)
{
    static int m;
    int rem, temp, digit;
    float power;
    temp = a;
    digit = digits(a);

    while (a > 0)
    {
        rem = a % 10;
        power = pow(rem, digit);
        a = a / 10;
        m = m + power;
    }

    if (temp == m)
        return printf("%d is an armstrong number ", temp);

    else
        return printf("%d is not an armstrong number ", temp);
}

int gcd(int a, int b)
{
    static int m;
    int small;

    if (a > b)
        small = b;
    else
        small = a;

    for (int i = 1; i < small; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            m = i;
        }
    }
    return m;
}

char *convert_to_words(int n)
{
    static char buffer[256];
    int i = 0;

    if (n == 0)
    {
        return "zero";
    }

    if (n < 0)
    {
        sprintf(buffer, "minus %s", convert_to_words(-n));
        return buffer;
    }

    if (n >= 100)
    {
        sprintf(buffer, "%s hundred ", ones[n / 100]);
        i = strlen(buffer);
        n %= 100;
    }

    if (n >= 10 && n <= 19)
    {
        sprintf(buffer + i, "%s ", teens[n - 10]);
        return buffer;
    }

    if (n >= 20)
    {
        sprintf(buffer + i, "%s ", tens[n / 10]);
        i = strlen(buffer);
        n %= 10;
    }

    if (n >= 1 && n <= 9)
    {
        sprintf(buffer + i, "%s", ones[n]);
    }

    return buffer;
}

int shopkeeper()
{
    int num, sum = 0, i = 0;
    printf("\n__________________________________________");
    printf("\n\tThe Shop Calculator");
    printf("\n------------------------------------------\n\n");

    while (1)
    {
        printf("Enter a the price for item %d : ", i + 1);
        scanf("%d", &num);

        if (num == 0)
            break;
        sum += num;
        i++;
    }

    printf("Total items are %d\nTotal bill is %d or %s", i, sum, convert_to_words(sum));

    return 0; 
}

void duplicatearray(int arr[], int *size)
{
    int i, j, k;
    for (i = 0; i < *size; i++)
    {
        for (j = i + 1; j < *size; j++)
        {
            if (arr[i] == arr[j])
            {
                for (k = j; k < *size; k++)
                {
                    arr[k] = arr[k + 1];
                }
                (*size)--;
                j--;
            }
        }
    }
}

void bubblesort(int arr[], int *size)
{
    int i, j, temp;
    for (i = 0; i < *size; i++)
    {
        for (j = i + 1; j < *size; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int circle(int r)

{
    int n;
    printf("1- Area\t 2- Circumference\nYour choice : ");
    scanf("%d", &n);
    if (n == 1)
    {
        return 3.147 * 3.147 * r;
    }
    else if (n == 1)
    {
        return 2 * 3.147 * r;
    }
}

void insertarray(int arr[], int *size)
{
    int num, element, temp, i;
    printf("\nEnter the number of element : ");
    scanf("%d", &num);
    printf("Enter the element : ");
    scanf("%d", &element);

    (*size)++;

    for (i = (*size) - 1; i >= num; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[num - 1] = element;
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

double probability(double p, double n, double r)
{
    double value, q;
   
    value = combination(n, r) * pow(p, r) * pow(q, n-r);
    return value;
}

