#include <stdlib.h>

/**
 * argstostr - Concatenates program arguments into a single string.
 * @ac: Number of arguments.
 * @av: Array of argument strings.
 *
 * Return: Pointer to concatenated string, or NULL on memory allocation failure.
 */
char *argstostr(int ac, char **av)
{
	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate the total length needed for concatenated string */
	size_t total_len = 0;
	for (int i = 0; i < ac; i++)
	{
		for (int j = 0; av[i][j] != '\0'; j++)
			total_len++;
		total_len++; /* Account for the newline character */
	}
	total_len++; /* Account for the null-terminator */

	/* Allocate memory for the concatenated string */
	char *str = malloc(total_len * sizeof(char));
	if (str == NULL)
		return (NULL);

	/* Copy the individual argument strings into the concatenated string */
	size_t k = 0;
	for (int i = 0; i < ac; i++)
	{
		for (int j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n'; /* Separate arguments with newline characters */
		k++;
	}
	str[k] = '\0'; /* Null-terminate the concatenated string */

	return (str);
}

