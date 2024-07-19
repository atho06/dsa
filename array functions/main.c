#include <stdio.h>
#include <stdlib.h>

int largest_element(int a[], int n)
{
    int large=0;
    for(int j=0; j<n; j++)
    {
        if (a[j]>large)
        {
            large=a[j];
        }
    }
    return large;
}


int no_of_positive(int a[], int n)
{
    int positive_integers=0;
    for(int j=0; j<n; j++)
    {
        if (a[j]>0)
        {
            positive_integers++;
        }
    }
    return positive_integers;
}


int average(int a[], int n)
{
    int sum=0;
    for(int j=0; j<n; j++)
    {
        sum+=a[j];
    }
    return (sum/n);
}

int main()
{
    int n, elmt, i=0;
    printf("Enter the size of the array:");
    scanf("%d", &n);
    int a[n];
    while(i<n)
    {
        printf("Enter element");
        scanf("%d", &elmt);
        a[i]=elmt;
        i++;
    }
    printf("largest:%d\n", largest_element(a, n));
    printf("no. of positive elements:%d\n", no_of_positive(a, n));
    printf("average:%d\n", average(a, n));
    return 0;
}
