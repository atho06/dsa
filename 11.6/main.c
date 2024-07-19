#include <stdio.h>
#include <stdlib.h>

void find_two_largest(int a[], int n, int *largest, int *second_largest)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp;
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    *largest=a[n-1];
    *second_largest=a[n-2];

}


int main()
{
    int array[] = {3, 5, 7, 2, 8, -1, 4, 10, 6};
    int size = 9;
    int largest, second_largest;
    find_two_largest(array, size, &largest, &second_largest);
    printf("Largest is: %d\n", largest);
    printf("Second largest is: %d", second_largest);
    return 0;
}

