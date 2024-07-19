#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, den, gcd, n, d, remainder;
    printf("Enter the fraction:");
    scanf("%d/%d", &num, &den);
    if (den==0)
    {
        printf("Fraction is undefined!!!");
    }
    else if (num==0)
    {
        printf("Lowest form of the fraction is:%d/%d", num, den);
    }
    else
    {
        n=num;
        d=den;
        while (den>0)
        {
            remainder=num%den;
            num=den;
            den=remainder;
        }
        gcd=num;
        printf("Lowest form of the fraction is:%d/%d", n/gcd, d/gcd);
    }
    return 0;
}
