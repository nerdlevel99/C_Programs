#include <stdio.h>
int leapyear(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        return 1;
    }

    else
    {
        return 0;
    }
}

int main()
{
    int day, month, year, i;
    int endDay, endMonth, endYear, days = 0;
    int monthDays[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    printf("Enter the date : ");
    scanf("%d %d %d", &day, &month, &year);
    printf("Enter the date : ");
    scanf("%d %d %d", &endDay, &endMonth, &endYear);

    int size = endYear - year;

    for (i = 0; i < size; i++)
    {
        monthDays[1] = 28;
        if (leapyear(year))
        {
            monthDays[1] = 29;
        }

        for (int j = 0; j < 12; j++)
        {
            days += monthDays[j];
        }

        year++;
    }

    int end_temp = 0;
    for (i = 0; i < endMonth; i++)
    {
        end_temp += monthDays[i];
    }

    printf("\n End Temp : %d\n", end_temp);

    int temp = 0;
    for (i = 0; i < month; i++)
    {
        temp += monthDays[i];
    }

    // printf("\n End Temp : %d\n" , temp );

    int temp_2 = end_temp - temp;

    days += temp_2;

    // printf("\n End Temp : %d\n" , temp_2 );

    int diff = endDay - day;

    days += diff;

    printf("No. of days are : %d ", days);

    return 0;
}