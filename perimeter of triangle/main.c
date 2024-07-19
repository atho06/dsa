#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    printf("Enter three sides:");
    scanf("%d%d%d", &a, &b, &c);
    printf("Perimeter of the triangle:%d", a+b+c);
    return 0;
}
