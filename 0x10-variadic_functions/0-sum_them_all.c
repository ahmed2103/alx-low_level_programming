#include <stdarg.h>

/**
 * sum_them_all- variadic function that returns the sum of all its parameters.
 * @n:constant that represent the number of args passed in the function.
 *
 * return sum of numbers as integer.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return 0;
	va_start (args, n);
	for (i = 0; i < n; ++i)
		sum += va_arg (args, int);
	va_end (args);
	return sum;
}
