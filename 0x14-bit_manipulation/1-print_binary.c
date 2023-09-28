#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: number that will be printed in binary representation.
 */
void print_binary(unsigned long int n)
{
	int shifts;
	unsigned long int temp = n;

	for (shifts = 0; temp >>= 1;++shifts)
		;
	for (;shifts >= 0; --shifts)
	{
		if ((n >> shifts) & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
