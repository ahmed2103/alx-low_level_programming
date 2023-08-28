#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The main string to be scanned.
 * @accept: The string containing the list of characters to match in @s.
 *
 * Return: The number of bytes in the initial segment of @s which consist
 *         only of characters from @accept.
 **/
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int count = 0; // Use unsigned int for count
	char *str1, *str2;

	str1 = s;
	str2 = accept;

	i = 0;
	while (str1[i] != '\0')
	{
		j = 0;
		while (str2[j] != '\0')
		{
			if (str2[j] == str1[i])
			{
				count++;
				break;
			}
			j++;
		}

		if (str2[j] == '\0')
		{
			break;
		}

		i++;
	}

	return (count);	

}
