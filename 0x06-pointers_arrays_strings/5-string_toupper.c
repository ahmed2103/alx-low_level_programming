#include "main.h"

/**
 *string_toupper - Converts lowercase characters to uppercase
 * @s: String to convert
 *
 * Return: Pointer to the new string
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
		s[i] = s[i] - ('a' - 'A');
		}
	}
	return (s);
}

