#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _realloc - reallocates memory from `ptr` to a new size, following certain conditions.
 * @ptr: Pointer to the previously allocated memory (must be freed after reallocation).
 * @old_size: The size of the previously allocated memory.
 * @new_size: The size of the new allocation.
 *
 * Return: Pointer to the reallocated memory.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *dest, *src;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		
		ptr = malloc(new_size);
		if (ptr == NULL)
		{
			return (NULL);
		}
		return (ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	dest = malloc(new_size);
	if (dest == NULL)
		return (NULL);
	src = ptr;

	for (i = 0; i < new_size && i < old_size; i++)
		dest[i] = src[i]; 
	free(ptr); 

	return (dest);
}

