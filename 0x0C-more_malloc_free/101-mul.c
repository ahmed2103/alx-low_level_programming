#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Multiply two numbers provided as command-line arguments.
 * @argc: Number of arguments.
 * @argv: Arguments.
 *
 * Return: 0 on success, non-zero on error.
 */
int main(int argc, char *argv[])
{
	/** Variables for storing the result and loop counters. */
	unsigned long mul;
	int i, j;

	/** Check for the correct number of arguments. */
	if (argc != 3)
	{
		printf("Error\n");
		return (1); /** Return a non-zero value to indicate an error. */
	}

	/** Check that the provided arguments are valid numbers. */
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				printf("Error\n");
				return (1); /** Return an error code if a non-digit character is found. */
			}
		}
	}

	/** Convert and multiply the numbers. */
	mul = atoi(argv[1]) * atoi(argv[2]);

	printf("%lu\n", mul);

	return (0); /** Return 0 to indicate success. */
}

