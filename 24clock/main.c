#include <stdio.h>

int main()
{
    int h, m, hr;
    printf("Enter time:");
    scanf("%d:%d", &h, &m);
    if (h>12&&h<24)
    {
        hr=h-12;
        printf("%d:%dpm", hr, m);
    }
    else if(h==24)
    {
        printf("12:00am")
    }
    else
    {
        printf("%d:%dam",h, m);
    }
    return 0;
}
