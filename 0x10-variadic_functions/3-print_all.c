#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - function that prints anything.
 * @format is a list of types of arguments passed to the function.
 */
void print_all(const char * const format, ...);
{
    va_list args
    unsigned int i;
    char *s;

va_start(args, format);
	while (format && format[i])
	{
		switch (format[i++])
		{
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			printf("%i", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 's':
			s = va_arg(args, char *);
			if (s == NULL)
				s = "(nil)";
			printf("%s", s);
			break;
		default:
			continue;
		}
		if (format[i])
			printf(", ");
	}
	putchar('\n');
}
