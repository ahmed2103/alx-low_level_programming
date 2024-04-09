#include "search_algos.h"

/**
 * linear_search - Finds an element in an array and retrieves its index.
 * @array: The array to search in.
 * @size: The size of the array.
 * @value: The value to be searched for.
 *
 * Return: The index if the element was found, or -1 if the array is NULL
 * or the element is not found.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);
	for (i = 0; i < size; ++i)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
