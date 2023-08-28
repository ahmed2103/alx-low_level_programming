#include "main.h"

/**
 * print_chessboard - Print the chessboard stored in a 2D array.
 * @a: 2D array of characters representing the chessboard.
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
    for (int i = 0; i < 8; i++) 
        for (int j = 0; j < 8; j++)
        {
            _putchar(a[i][j]);
        }
        _putchar('\n');
    }
}
