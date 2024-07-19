#include <stdio.h>
#include <stdlib.h>

int no_of_digits(int n)
{
    if (n<10)
    {
        return 1;
    }
    else
    {
        return no_of_digits(n/10)+1;
    }
}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    printf("no. of digits:%d", no_of_digits(n));
    return 0;
}
