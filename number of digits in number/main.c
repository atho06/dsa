#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, d=0;
    printf("Enter a number:");
    scanf("%d", &n);
    do
    {
        n/=10;
        d++;
    }while(n>0);
    printf("The number of digits is:%d", d);
    return 0;
}
