#include <stdio.h>
#include <stdlib.h>
#define ROWS 25
#define COLUMNS 25

void create_matrix(int row, int column, int *matrix[][25])
{
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<column; j++)
        {
            scanf("%d", &*(matrix(i*row)+j));
        }
    }
}

//void add_matrices(int *matrix1[][25],int * matrix2[][25], int m1r, int m1c)

void display_matrix(int row, int column, int *matrix[][25])
{
    for (int i = 0; i < mr; i++)
    {
        for (int j = 0; j < mc; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

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
        create_matrix(m1r, m1c, matrix1);
        printf("Enter the elements in the second matrix:");
        create_matrix(m2r, m2c, matrix2);
        for(int i=0; i<m1r; i++)
        {
            for(int j=0; j<m1c; j++)
            {
                resultant[i][j]=matrix1[i][j]+matrix2[i][j];
            }
        }
        display_matrix(m1r, m2c, *matrix);
    }
    else
    {
        printf("not possible!!!");
    }
    return 0;
}
