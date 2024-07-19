#include <stdio.h>
#include <stdlib.h>

void find_largest(int a[], int n, int *largest)
{
    *largest = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > *largest)
        {
            *largest = a[i];
        }
    }
}

int main()
{
    int array[] = {3, 5, 7, 2, 8, -1, 4, 10, 6};
    int size = 9;
    int largest;
    find_largest(array, size, &largest);
    printf("The largest element is %d", largest);
    return 0;
}
