#include <stdlib.h>

/**
 * alloc_grid - Allocate memory for a 2D grid and initialize with zeros
 * @width: Width of the grid (number of columns)
 * @height: Height of the grid (number of rows)
 *
 * Return: Pointer to a 2D array (grid), or NULL if allocation fails
 */
int **alloc_grid(int width, int height)
{
    int **grid;
    int i, j;

    if (width <= 0 || height <= 0)
        return NULL;

    grid = malloc(height * sizeof(int *));
    if (grid == NULL)
        return NULL;

    for (i = 0; i < height; i++)
    {
        grid[i] = malloc(width * sizeof(int));
        if (grid[i] == NULL)
        {
            for (int j = 0; j < i; j++)
                free(grid[j]);
            free(grid);
            return NULL;
        }

        for (j = 0; j < width; j++)
            grid[i][j] = 0;
    }

    return grid;
}

