#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - print `n' variable int arguments separated by `separator'
 * @separator: separator between ints
 * @n: number of variable arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	if (!separator)
		separator = "";
	va_start(args, n);
	for (i = 1; i < n; ++i)
	{
		printf("%d%s", va_arg(args, int), separator);
	}
	printf("%d", va_arg(args, int));
	putchar('\n');
	va_end(args);
}
