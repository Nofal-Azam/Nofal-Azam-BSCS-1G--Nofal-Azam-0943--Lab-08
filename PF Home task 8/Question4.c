#include <stdio.h>

int main()
{
    int seats[3][3] = {{1, 0, 1}, {0, 0, 1}, {1, 1, 0}};
    int count = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (seats[i][j] == 0)
            {
                count += 1;
            }
        }
    }
    printf("The total Number of available seats: %d", count);
}