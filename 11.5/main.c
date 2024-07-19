#include <stdio.h>
#include <stdlib.h>

void split_time(long total_sec, int *hr, int *min, int *sec)
{
    *hr = total_sec / 3600;
    *min = (total_sec % 3600) / 60;
    *sec = total_sec % 60;
}

int main()
{
    long total_seconds = 60;
    int hours, minutes, seconds;
    split_time(total_seconds, &hours, &minutes, &seconds);
    printf("%ld seconds is equivalent to %dhrs %dmin %dseconds", total_seconds, hours, minutes, seconds);
    return 0;
}

