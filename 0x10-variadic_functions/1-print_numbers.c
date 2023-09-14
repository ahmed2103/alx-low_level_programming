#include <stdio.h>
#include <stdarg.h>
/**
 * print_number-variadic function that prints numbers, followed by a new line.
 * @seprator:the string to be printed between numbers.
 * @n:the number of integers passed to the function.
 * return nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	if (!separator)
		separator = "";
	va_start (args, n);
	for (i = 1; i < n; ++i)
	{	
		printf("%d%s", va_arg(args, int), separator);
	}	
	printf("%d\n", va_arg(args, int));
	va_end (args);
}
