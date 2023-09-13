#include <stdlib.h>

/**
 * int_index-a function that searches for an integer.
 * array is a pointer to the array where searching.
 * @size is the number of elements in the array array.
 * @cmp is a pointer to the function to be used to compare values.
 *
 * return integer that represents the index of the array.if not return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp)
		exit(EXIT_FAILURE);
	if (size <= 0)
	       	return (-1);

	for (i = 0; i < size; ++i)
	{
		if (cmp(array[i]))
			return (i);
	}	
	return (-1);
}
