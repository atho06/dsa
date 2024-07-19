#include <stdio.h>
#include <stdlib.h>

int fib(int n)
{
    if (n<3)
    {
        return (n-1);
    }
    else
    {
        return (fib(n-1)+fib(n-2));
    }
}
int main()
{
    int n;
    printf("Enter term:");
    scanf("%d", &n);
    for (int i=1; i<=n; i++)
    {
        printf("The %dth term is: %d\n", i, fib(i));
    }
    return 0;
}
