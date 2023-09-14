#include <stdarg.h>
#include <stdio.h>

/**
 *print_strings - variadic fubction prints `n' strings separated by separator.
 *@separator: is the string to be printed between the strings.
 *@n: is the number of strings passed to the function.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	char *s;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);

		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}
