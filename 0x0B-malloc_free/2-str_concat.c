#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two input strings.
 * @s1: First input string.
 * @s2: Second input string.
 *
 * Return: Pointer to concatenated string, or NULL on memory allocation failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculate lengths of input strings */
	i = j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;

	concat = malloc(sizeof(char) * (i + j + 1));
	if (concat == NULL)
		return (NULL);

	/* Copy contents of the input strings into the concatenated string */
	i = j = 0;
	while (s1[i] != '\0')
	{
		concat[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		concat[i] = s2[j];
		i++, j++;
	}
	concat[i] = '\0'; /* Null-terminate the concatenated string */

	return (concat);
}

