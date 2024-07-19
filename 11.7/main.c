#include <stdio.h>
#include <stdlib.h>

void split_date(int day_of_year, int year, int *month, int *day)
{
    static int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        days_in_month[1] = 29;
    }

    int rem_days = 0;
    for (int i = 0; i < 12; i++)
    {
        if (day_of_year <= rem_days + days_in_month[i])
        {
            *month = i + 1;
            *day = day_of_year - rem_days;
            return;
        }
        rem_days += days_in_month[i];
    }
}

int main()
{
    int day_of_year = 365;
    int year = 2023;
    int month, day;
    split_date(day_of_year, year, &month, &day);
    printf("Day %d of year %d is %d/%d", day_of_year, year, month, day);
    return 0;
}
