#include <stdio.h>
#include <stdlib.h>

double inner_product(double a[], double b[], int n)
{
    double product=0.0;
    for (int i=0; i<n; i++)
    {
        product+=a[i]*b[i];
    }
    return product;

}

int main()
{
    int n, i=0, j=0;
    double elmt;
    printf("Enter the size of the arrays:");
    scanf("%d", &n);
    double a[n];
    printf("____Enter elements of array a____\n");
    while(i<n)
    {
        printf("Enter elements:");
        scanf("%lf", &elmt);
        a[i]=elmt;
        i++;
    }
    double b[n];
    printf("____Enter elements of array b____\n");
    while(j<n)
    {
        printf("Enter elements:");
        scanf("%lf", &elmt);
        b[j]=elmt;
        j++;
    }
    printf("%lf", inner_product(a, b, n));
    return 0;
}
