#include <stdio.h>

int main()
{
    int rows = 4, cols = 4;
    int grid[4][4] = {
        {12, 15, 10, 9},
        {11, 8, 12, 13},
        {14, 13, 9, 7},
        {16, 11, 10, 8}};
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {

            int current = grid[i][j];
            int isCold = 1;

            if (i > 0 && current >= grid[i - 1][j])
            {
                isCold = 0;
            }
            if (i < rows - 1 && current >= grid[i + 1][j])
            {
                isCold = 0;
            }
            if (j > 0 && current >= grid[i][j - 1])
            {
                isCold = 0;
            }
            if (j < cols - 1 && current >= grid[i][j + 1])
            {
                isCold = 0;
            }
            if (isCold == 1)
            {
                printf("At position (%d,%d) with temperature %d°C\n", i + 1, j + 1, current);
            }
        }
    }

    return 0;
}
