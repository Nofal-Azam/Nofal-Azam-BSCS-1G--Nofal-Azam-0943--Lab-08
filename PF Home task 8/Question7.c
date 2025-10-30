#include <stdio.h>

int main()
{
    int rows = 5;
    char letter;

    // Asterisk pyramid
    for (int i = 0; i < rows; i++)
    {
        int count = 2 * i + 1;
        int spaces = rows * 2 - i * 2 - 1;

        for (int s = 0; s < spaces; s++)
        {
            printf(" ");
        }

        for (int j = 0; j < count; j++)
        {
            printf("* ");
        }

        printf("\n");
    }

    printf("\n");

    // Number pyramid
    for (int i = 0; i < rows; i++)
    {
        int count = 2 * i + 1;
        int spaces = rows * 2 - i * 2 - 1;

        for (int s = 0; s < spaces; s++)
        {
            printf(" ");
        }

        for (int j = 1; j <= count; j++)
        {
            printf("%d ", j);
        }

        printf("\n");
    }

    printf("\n");

    // Letter pyramid
    for (int i = 0; i < rows; i++)
    {
        int count = 2 * i + 1;
        int spaces = rows * 2 - i * 2 - 1;

        for (int s = 0; s < spaces; s++)
        {
            printf(" ");
        }

        letter = 'A';
        for (int j = 0; j < count; j++)
        {
            printf("%c ", letter++);
        }

        printf("\n");
    }

    return 0;
}