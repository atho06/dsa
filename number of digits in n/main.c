#include <stdio.h>
#include <stdlib.h>

int num_digits(int n)
{
    int d, flag=1;
    while( flag==1)
    {
        n/=10;
        d++;
        if (n==0)
        {
            flag=0;
            return d;
        }
    }
}

int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    printf("The number of digits is:%d", num_digits(n));
    return 0;
}
