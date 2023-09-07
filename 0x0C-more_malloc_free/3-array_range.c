#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * array_range - Creates an array of integers in the range [min, max].
 * @min: The minimum value.
 * @max: The maximum value.
 *
 * Return: Pointer to the newly created array of integers.
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, len;

	if (min > max)
		return (NULL);

	len = max - min + 1; 

	arr = malloc(sizeof(int) * len);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		arr[i] = min++; 
	}

	return (arr);
}

