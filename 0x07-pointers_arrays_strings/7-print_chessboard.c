#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - Print the chessboard stored in a 2D array.
 * @a: 2D array of characters representing the chessboard.
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
    int i, n;

    for (i = 0; i < 8; i++)
    {
        for (n = 0; n < 8; n++)
            putchar(a[i][n]);
        putchar('\n');
    }
}
