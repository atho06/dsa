#include <stdio.h>
#include <stdlib.h>
#define ROWS 25
#define COLUMNS 25

int main()
{
    int matrix1[ROWS][COLUMNS];
    int matrix2[ROWS][COLUMNS];
    int resultant[ROWS][COLUMNS];
    int m1r, m1c, m2r, m2c;
    printf("Enter the order of the first matrix:");
    scanf("%d%d", &m1r,&m1c);
    printf("Enter the order of the second matrix:");
    scanf("%d%d", &m2r,&m2c);
    if(m1r==m2r && m1c==m2c)
    {
        printf("Enter the elements in the first matrix:");
        for(int i=0; i<m1r; i++)
        {
            for(int j=0; j<m1c; j++)
            {
                scanf("%d", &matrix1[i][j]);
            }
        }
        printf("Enter the elements in the second matrix:");
        for(int i=0; i<m2r; i++)
        {
            for(int j=0; j<m2c; j++)
            {
                scanf("%d", &matrix2[i][j]);
            }
        }
        for(int i=0; i<m1r; i++)
        {
            for(int j=0; j<m1c; j++)
            as{
                resultant[i][j]=matrix1[i][j]+matrix2[i][j];
            }
        }
        for(int i=0; i<m1r; i++)
        {
            for(int j=0; j<m1c; j++)
            {
                printf("%d ", resultant[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("not possible!!!");
    }
    return 0;
}
