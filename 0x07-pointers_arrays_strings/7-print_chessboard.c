#include "main.h"

/**
 * print_chessboard - Print the chessboard stored in a 2D array.
 * @a: 2D array of characters representing the chessboard.
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
    for (int row = 0; row < 8; row++)
    {
        for (int col = 0; col < 8; col++)
        {
            putchar(a[row][col]);
        }
        putchar('\n');
    }
}
