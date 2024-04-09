#include "search_algos.h"

/**
 * binary_search - searching for value using binary search algoritm.
 * @array: the array to search in.
 * @size: the size of the array.
 * @value: the target to search for.
 * @return: the index of the target if found OR
 * -1 if array is null or target not found.
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
