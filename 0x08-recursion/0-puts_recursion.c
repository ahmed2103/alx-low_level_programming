#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a newline using recursion.
 * @s: The input string.
 *
 * Description: This function prints the characters of the string @s
 *              one by one until the null terminator is encountered,
 *              and then it prints a newline character.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}

