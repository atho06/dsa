#include <stdio.h>
#define ROWS 25
#define COLUMNS 25

int create_matrix(int)
{
    int matrix[ROWS][COLUMNS];
    int mr, mc;
    printf("Enter the order of the matrix:");
    scanf("%d%d", &mr,&mc);
    printf("Enter the elements in the matrix:");
    for(int i=0; i<mr; i++)
    {
        for(int j=0; j<mc; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    return 0;
}
