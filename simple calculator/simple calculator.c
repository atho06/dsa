#include <stdio.h>
#include "calculator.h"
float add(float a, float b)
{
    return(a+b);
}
float multiply(float a, float b)
{
    return(a*b);
}
float sub(float a, float b)
{
    return(a-b);
}
float division(float a, float b)
{
    if(b!=0.0)
    {
        return(a/b);
    }
    printf("cannot divide by zero!");
    return 0;
}
