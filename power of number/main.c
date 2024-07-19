#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a,b;
    printf("Enter the base number and the power:" );
    scanf("%d%d", &a, &b);
    printf("%d^%d=%.2lf", a, b, pow(a,b));
    return 0;
}
