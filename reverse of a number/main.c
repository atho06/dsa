#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, reverse, d;
    printf("Enter a number:");
    scanf("%d", &n);
    if (n<0)
    {
        n=n*-1;
    }
    while(n>0)
    {
        d=n%10;
        n=n/10;
        reverse=reverse*10+d;
    }
    printf("The reversed number is:%d", reverse);
    return 0;
}
