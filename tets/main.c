#include <stdio.h>
#include <stdlib.h>


int bubble_sort(int array[], int size)
{
    int temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {

            if (array[j] > array[j+1])
            {
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
    return array[size-2];
}

int main()
{
    int array_int[]={1,26,4,3,9,3,42,4,24,654,342,75,60};
    int size=13;
    printf("%d", bubble_sort(array_int, size));
    /*printf("Sorted array:");
    for (int i=0; i<size; i++)
    {
        printf("%d, ", array_int[i]);
    }
    printf("%d", array_int[size-1]);*/
    return 0;
}
