#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    int i = 5, j = 10;
    swap(&i, &j);
    printf("i = %d, j = %d", i, j);
    return 0;
}
