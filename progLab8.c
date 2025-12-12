#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n;
    printf("Write a count rows and columns in matrix\n");
    scanf("%d %d", &m, &n);

    int **matrix = (int**)malloc(m * sizeof(int*));
    for(int i = 0; i < m; i++)
    {
        matrix[i] = (int*)malloc(n * sizeof(int));
    }
    printf("Write elements of matrix\n");
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    int zeroRow = -1;
    int zeroCol = -1;
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if (matrix[i][j] == 0)
            {
                zeroRow = i;
                zeroCol = j;
                break;                
            }
        }
    }
    printf("%d %d", zeroRow, zeroCol);
    if ((zeroRow == -1) && (zeroCol == -1))
    {
        printf("No nulls\n");
        free(matrix);
        return 0;
    }
    else
    {
        int size = n - zeroCol;
        if (size > m - zeroRow)
        {
            size = m - zeroRow;
        }
        printf(" %d", size);
        zeroCol = (zeroCol + 1) - size;
        for(int i = 0; i < size; i++)
        {
            for(int j = i + 1; j < size; j++)
            {
                int temp = matrix[zeroRow + i][zeroCol + j];
                matrix[zeroRow + i][zeroCol + j] = matrix[zeroRow + j][zeroCol + i];
                matrix[zeroRow + j][zeroCol + i] = temp;
            }
        }
        int countZero = 0;
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if (matrix[i][j] == 0)
                {
                    countZero = countZero + 1;
                }
            }
        }
        if (countZero > m)
        {
            for(int i = 0; i < m; i++)
            {
                for(int j = 0; j < n; j++)
                {
                    if (matrix[i][j] == 0)
                    {
                        matrix[i][j] = m;
                    } 
                }
            }
        }
        for(int i = 0; i < m; i++)
        {
            printf("\n");
            for(int j = 0; j < n; j++)
            {
                printf("%d ", matrix[i][j]);
            }
        }
        free(matrix);
    }
}