#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a, b, c, D, r1, r2;
    printf("QUADRATIC EQUATION\n");
    printf("Enter the coefficient of x^2:");
    scanf("%lf", &a);
    printf("Enter the coefficient of x:");
    scanf("%lf", &b);
    printf("Enter the constant:");
    scanf("%lf", &c);
    D=(pow(b,2)-4*a*c);
    if (D>=0)
    {
        r1=(-b+pow(D,0.5))/2*a;
        r2=(-b-pow(D,0.5))/2*a;
        if (D>0)
        {
           printf("The roots are %lf and %lf\n", r1, r2);
           printf("The roots are real and distinct");
        }
        else
        {
            printf("The roots are %lf and %lf\n", r1, r2);
            printf("The roots are real and equal");
        }
    }
    else
    {
        printf("The roots are imaginary");
    }

    return 0;
}
