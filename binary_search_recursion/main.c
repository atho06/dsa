#include <stdio.h>
#include <stdlib.h>

int binary_search_rec(int array[], int lower, int upper, int key)
{

    if (lower<=upper)
    {
        int mid=(lower+upper)/2;
        if (array[mid]>key)
            return binary_search_rec(array, lower ,  mid-1,  key);
        else if (array[mid]<key)
            return binary_search_rec(array, mid+1, upper, key);
        else
            return mid;
    }
    else
    {
        return -1;
    }
}

int main()
{
    int array[]= {1,2,3,4,5,6,7,8,9,10,11,12};
    int key, found;
    printf("Enter key:");
    scanf("%d", &key);
    found= binary_search_rec(array, 0, 12, key);
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

