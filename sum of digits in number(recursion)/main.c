#include <stdio.h>
#include <stdlib.h>

int sum_of_digits(int n)
{
    if (n<10)
    {
        return n;
    }
    else
    {
        return sum_of_digits(n/10)+ n%10;
    }
}

int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    printf("no. of digits:%d", sum_of_digits(n));
    return 0;
}
