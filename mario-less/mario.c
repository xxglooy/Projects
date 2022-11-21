#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int Height, row, column, space;
    do
    {
        Height = get_int("Height: ");
    }
    while (Height < 1 || Height > 8);

    for (row = 0; row < Height; row++)
    {
        for (space = 0; space < Height - row -1; space++)
        {
            printf(" ");
        }
        for (column = 0; column <= row; column++)
        {
            printf("#");
        }
        printf("\n");
    }
}