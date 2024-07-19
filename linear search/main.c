#include <stdio.h>
#include <stdlib.h>

int linear_search(int array[], int size, int key)
{
  for (int i=0; i<size; i++)
  {
      if (array[i]==key)
        {
            return i;
        }
  }
  return -1;
}

int main()
{
    int array[]={1,2,3,4,5,6,7,8,9,10,11,12};
    int key, found;
    printf("Enter key:");
    scanf("%d", &key);
    found= linear_search(array, 12, key);
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
