#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int num1, num2, remainder;
    printf("Enter number1:");
    scanf("%d", &num1);
    printf("Enter number2:");
    scanf("%d", &num2);


    if (num1==0)
    {
        printf("GCD is %d", num2);
    }
    else if (num2==0)
    {
        printf("GCD is %d", num1);
    }
    else
    {
        while (num2>0)
    {
        remainder=num1%num2;
        num1=num2;
        num2=remainder;
    }
       printf("GCD is %d", num1);
    }

    return 0;
}
