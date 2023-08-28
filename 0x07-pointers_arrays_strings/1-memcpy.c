#include "main.h"

/**
 * _memcpy - Copies a specified number of bytes from source to destination
 * @dest: Destination memory address
 * @src: Source memory address
 * @n: Number of bytes to copy
 * Return: Pointer to the destination memory address
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
