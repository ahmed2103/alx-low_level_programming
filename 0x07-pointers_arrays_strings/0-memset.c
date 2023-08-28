#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: Pointer to block of memory to fill
 * @b: Value to set
 * @n: Number of bytes to fill
 * Return: Pointer to the memory block
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
