#include <stdio.h>

int main()
{
    int gradebook[3][4] = {{85, 92, 78, 90}, {88, 76, 95, 84}, {90, 85, 88, 92}};
    for (int i = 0; i < 3; i++)
    {
        int total = 0;
        for (int j = 0; j < 4; j++)
        {
            total += gradebook[i][j];
        }
        printf("Average for class%d is : %.1f\n", i + 1, (float)total / 4);
    }
}