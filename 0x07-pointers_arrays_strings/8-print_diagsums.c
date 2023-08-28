#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals.
 * @a: 2D array representing the matrix
 * @size: Size of the square matrix
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i);              /* Sum of main diagonal elements */
		sum2 += *(a + i * size + size - i - 1);   /* Sum of anti-diagonal elements */
	}

	printf("%d, %d\n", sum1, sum2);
}
