#include <stdio.h>
#include <stdlib.h>

int check(int x, int y, int n)
{
    if((0<x && x<(n-1)) && (0<y && y<(n-1)))
    {
        return 1;
    }
    return 0;
}


int main()
{
    int x, y, n;
    printf("Enter number1:");
    scanf("%d", &x);
    printf("Enter number2:");
    scanf("%d", &y);
    printf("Enter n:");
    scanf("%d", &n);
    printf("%d", check( x, y, n));
}
