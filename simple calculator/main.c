#include <stdio.h>
#include <stdlib.h>
#include "calculator.h"

int main()
{
    float a, b;
    int c;
    printf("Enter 1st number:");
    scanf("%f", &a);
    printf("Enter 2nd number:");
    scanf("%f", &b);
    printf("Enter 1 to add\nEnter 2 to subtract\nEnter 3 to multiply\nEnter 4 to divide\nEnter your choice:");
    scanf("%d", &c);
    if(c==1)
    {
        printf("%f", add(a, b));
    }
    else if(c==2)
    {
        printf("%f", sub(a, b));
    }
    else if(c==3)
    {
        printf("%f", multiply(a, b));
    }
    else
    {
        printf("%f", division(a, b));
    }
    return 0;
}
