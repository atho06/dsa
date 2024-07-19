#include <stdio.h>
int twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    for (int i=0; i<numsSize; i++)
    {
        for (int j=0; j<numsSize; j++)
        {
            if (*(nums+i)+*(nums+j)==target)
            {
                *(returnSize+0)=i;
                *(returnSize+1)=j;
                return *returnSize;
            }
        }
    }
    return 0;
}

int main()
{
    int nums[]={2, 7, 11, 15, 5, 4};
    int numSize=6, target=9, returnsize[2];
    twoSum(nums, numSize, target, returnsize);
    printf("%d, %d", returnsize[0], returnsize[1]);
    return 0;
}
