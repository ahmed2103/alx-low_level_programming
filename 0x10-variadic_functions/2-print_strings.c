#include <stdarg.h>
#include <stdio.h>

/**
 *print_strings-variadic fubction prints strings, followed by a new line.
 *@separator:is the string to be printed between the strings.
 *@n is the number of strings passed to the function.
 *
 * return nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	char *s;

	if (!separator)
		separator = "";
	va_start (args, n);
	for (i = 1;i < n; i++)
	{	s = va_arg(args, char *);
		printf("%s%s", s ? s : "nil" , separator);
	}	
	s = va_arg(args, char *);
	printf("%s\n", s ? s : "nil");
}
