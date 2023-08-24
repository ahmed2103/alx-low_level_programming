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
	int i, c = 0;
	const int sl[] = {97, 101, 111, 116, 108};
	const int ul[] = {65, 69, 79, 84, 76};
	const int n[] = {52, 51, 48, 55, 49};

	while (s[c] != '\0')
	{
		for (i = 0; i < 5; i++)

			{
			if (s[c] == sl[i] || s[c] == ul[i])
				{
				s[c] = n[i];
				break;
				}
			}
	++c;
	}
	return (s);
}
