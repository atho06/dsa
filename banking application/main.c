#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *array;
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    array = (int*)malloc(size * sizeof(int));
    if (array == NULL)
    {
        printf("allocation failed\n");
        return 1;
    }
    for (int i = 0; i < size; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    printf("The array elements are: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    free(array);
    return 0;
}
