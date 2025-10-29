#include <stdio.h>

int main()
{
    int image[4][4] = {{1, 0, 1, 0}, {1, 0, 1, 0}, {1, 1, 0, 0}, {0, 0, 1, 1}};
    int reversed[4][4];
    int count = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (image[i][j] == 1)
            {
                reversed[i][j] = 0;
                count += 1;
            }
            else
            {
                reversed[i][j] = 1;
            }
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", image[i][j]);
        }
        printf("      ");
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", reversed[i][j]);
        }
        printf("\n");
    }
    printf("The number of White Pixels in original image is: %d", count);
}