#include <stdio.h>
#include <stdlib.h>

int binary_search(int array[], int size, int key)
{
    int lower=0, upper=size, mid;
    while (lower<upper)
    {
        mid=(lower+upper)/2;
        if (array[mid]>key)
            upper=mid-1;
        else if (array[mid]<key)
            lower=mid+1;
        else
            return mid;
    }
    return -1;
}

int main()
{
    int array[]= {1,2,3,4,5,6,7,8,9,10,11,12};
    int key, found;
    printf("Enter key:");
    scanf("%d", &key);
    found= binary_search(array, 12, key);
    if (found!=-1)
    {
        printf("%d found at %d",key, found);
    }
    else
    {
        printf("not found!");
    }
    return 0;
}
