#include <stdlib.h>
#include <stdio.h>

int display_matrix(int mr, int mc)
{
    for (int i = 0; i < mr; i++)
    {
        for (int j = 0; j < mc; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
