#include <stddef.h>

/**
 * _strpbrk - Locate the first occurrence of any byte from `accept` in string
 * @s: The input string
 * @accept: The set of bytes to search for
 *
 * Return: A pointer to the byte in s that matches one of the bytes in accept
 *         or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
	char *a = accept;

	while (*a != '\0')
		{
		if (*a == *s)
			return (s);
			a++;
		}
	s++;
	}

	return (NULL);
}
