#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,d;
    while (1)
    {
        printf("Enter number:");
        scanf("%d", &n);
        if (n>d)
        {
            d=n;
        }
        else if (n<=0)
        {
            break;
        }
    }
    printf("The largest non-negative number entered is %d", d);
    return 0;
}
