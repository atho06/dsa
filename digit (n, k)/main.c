#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int digit(int n, int k)
{
    int quotient, digit;
    quotient=n/(pow(10,(k-1)));
    digit=quotient%10;
    return digit;
}

int main()
{
    int n, k;
    printf("Enter number:");
    scanf("%d", &n);
    printf("Enter position from right:");
    scanf("%d", &k);
    printf("%d", digit(n, k));
    return 0;
}
