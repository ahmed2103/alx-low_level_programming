#include "main.h"
/**
 * leet - is  function encoding a string into 1337
 *
 * @s: string input
 *
 * Return: @s
*/

char *leet(char *s)
{
	int i;
	char *p = s;

	while (*p != '\0')
	{
	char c;

	c = (*p >= 'A' && *p <= 'Z') ? (*p + ('a' - 'A')) : *p;
			for (i = 0; i < 5; i++)
			{
				if (c == sl[i] || c == ul[i])
				{
					*p = n[i];
					break;
				}
		}

	p++;
	}
	return (s);
}

