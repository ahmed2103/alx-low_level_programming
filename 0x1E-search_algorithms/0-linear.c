#include "search_algos.h"
/**
 * linear_search - finds element of an array and retrieve its index.
 * @array: the array to search in.
 * @size: the size of the array.
 * @value: the value to be searched for.
 * @return: the index if the element was found OR
 * -1 if the array is NULL or element not found.
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
