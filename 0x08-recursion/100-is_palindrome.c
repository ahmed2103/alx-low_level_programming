#include "main.h"

/**
 * length - Calculate the length of a string.
 * @s: The input string.
 * Return: The length of the string.
 */
int length(char *s)
{
	int i = 0;

	if (*s)
	{
		i = i + length(s + 1);
		return (i + 1);
	}
	return (0);
}

/**
 * helper2 - Helper function to check if a string is a palindrome.
 * @i: The current position of the comparison.
 * @s: The input string.
 * Return: 1 if the string is a palindrome, otherwise 0.
 */
int helper2(int i, char *s)
{
	if (*s)
	{
		if (*s != s[length(s) - i])
		{
			return (0); /* Not a palindrome */
		}
		else
		{
			return (helper2(i + 1, s + 1)); /* Recursive check */
		}
	}
	return (1); /* Palindrome */
}

/**
 * is_palindrome - Check if a string is a palindrome.
 * @s: The string to check.
 * Return: 1 if the string is a palindrome, otherwise 0.
 */
int is_palindrome(char *s)
{
	int i = 1;

	return (helper2(i, s));
}

