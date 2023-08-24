#include "main.h"

/**
 * _strncpy - Copies a string with a specified limit
 * @dest: Destination to copy into
 * @src: Source to copy from
 * @n: Maximum number of characters to copy
 *
 * Return: Pointer to the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
	dest[i] = src[i];
	}
	for (; i < n; i++)
	{
	dest[i] = '\0';
	}
    return dest;
}

