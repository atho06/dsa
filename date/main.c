#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d, m, y;
    printf("Enter the day:");
    scanf("%d", &d );
    printf("Enter the month:");
    scanf("%d", &m);
    printf("Enter the year:");
    scanf("%d", &y);
    printf("%d/%d/%d", d, m, y);
    return 0;
}
