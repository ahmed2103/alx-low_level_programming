#include "search_algos.h"

/**
 * binary_search - Searches for a value using the binary search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is found, the function returns the index of the value
 * in the array. If the value is not present or if the array is NULL, it
 * returns -1.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left, right, mid, i;

	if (!array)
		return (-1);

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		printf("Searching in array:");
		for (i = left; i <= right; i++)
		{
			printf(" %d", array[i]);
			if (i < right)
				printf(",");
		}
	printf("\n");
	mid = (left + right) / 2;
	if (array[mid] > value)
		right = mid - 1;
	else if (array[mid] < value)
		left = mid + 1;
	else
		return (mid);
	}
	return (-1);
}
