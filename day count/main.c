#include <stdio.h>
#include <stdlib.h>


int day_count(int m, int d, int y)
{
    int lp;
    if (y%400==0||(y%4==0 && y%100!=0))
    {
        lp=1;
    }
    else
    {
        lp=0;
    }
    int days_in_month[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int day= 0;
    if (lp==0)
    {
        days_in_month[1] = 28;
    }
    for (int i = 0; i < m - 1; i++)
    {
        day += days_in_month[i];
    }
    day += d;
    return day;
}

int main()
{
    int m, d, y;
    printf("Enter month:");
    scanf("%d", &m);
    printf("Enter day:");
    scanf("%d", &d);
    printf("Enter year:");
    scanf("%d", &y);
    printf("The day of the year is: %d\n", day_count(m, d, y));
    return 0;

}

