#include <stdio.h>
#include <stdlib.h>

int GCD(int num1 , int num2)
{
    if (num1==0)
    {
        printf("GCD is %d\n", num2);
    }

    else if (num2==0)
    {
        printf("GCD is %d\n", num1);
    }
    else
    {
        while (num2>0)
        {
            int remainder=num1%num2;
            num1=num2;
            num2=remainder;
        }
        printf("GCD is %d\n", num1);
    }
    return 0;
}

int main()
{
    int num1, num2;
    printf("Enter number1:");
    scanf("%d", &num1);
    printf("Enter number2:");
    scanf("%d", &num2);
    GCD(num1 , num2);
    return 0;
}
