#include "main.h"

/**
 * flip_bits - count the number of bits different between to binary.
 * n: the first number.
 * m: the second number.
 * Return: the number of bits differ.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flip = 0;

	n = n ^ m;
	while(n)
	{
		n &= (n-1);
		++flip;
	}
	return (flip);
}
