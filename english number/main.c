#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n, r, d;
    printf("Enter number:");
    scanf("%d", &n);
    d=n/10;
    r=n%10;
    switch (d)
    {
    case 2:
        printf("Twenty");
        break;
    case 3:
        printf("Thirty");
        break;
    case 4:
        printf("Forty");
        break;
    case 5:
        printf("Fifty");
        break;
    case 6:
        printf("Sixty");
        break;
    case 7:
        printf("Seventy");
        break;
    case 8:
        printf("Eighty");
        break;
    case 9:
        printf("Ninety");
break;
    case 1:
        switch (n)
        {
        case 11:
            printf("Eleven");
            break;
        case 12:
            printf("Twelve");
            break;
        case 13:
            printf("Thirteen");
            break;
        case 14:
            printf("Fourteen");
            break;
        case 15:
            printf("Fifteen");
            break;
        case 16:
            printf("Sixteen");
            break;
        case 17:
            printf("Seventeen");
            break;
        case 18:
            printf("Eighteen");
            break;
        case 19:
            printf("Nineteen");
        }
        return 0;
    }


    switch (r)
    {
    case 1:
        printf("One");
        break;
    case 2:
        printf("Two");
        break;
    case 3:
        printf("Three");
        break;
    case 4:
        printf("Four");
        break;
    case 5:
        printf("Five");
        break;
    case 6:
        printf("Six");
        break;
    case 7:
        printf("Seven");
        break;
    case 8:
        printf("Eight");
        break;
    case 9:
        printf("Nine");
    }
    return 0;
}

