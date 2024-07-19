#include <stdio.h>
#include <stdlib.h>
#define DAYS 30
#define HOURS 24

int main()
{
    float sum = 0.0, temp[DAYS][HOURS] = { 25.7, 34.2, 32.5, 29.6, 26.3 };
    int total= DAYS * HOURS;

    for (int day = 0; day < DAYS; day++) {
        for (int hr = 0; hr < HOURS; hr++) {
            sum += temp[day][hr];
        }
    }
    float avg_temp= sum / total;
    printf("The average temperature is: %f", avg_temp);

    return 0;
}
