#include <stdio.h>
#include <stdlib.h>

long factorial(int num)
{
    long factorial=1;
    if(num>0)
    {
        for(int i=1; i<=num; i++)
        {
            factorial*=i;
        }
        return factorial;
    }
    return -1;

}
int main()
{
    int num;
    printf("Enter number:");
    scanf("%d", &num);
    printf("Factorial is:%ld", factorial(num));
    return 0;
}
