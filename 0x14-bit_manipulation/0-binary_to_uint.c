#include "main.h"

/**
 * binary_to_unit - converts a binary number to an unsigned int.
 * @b: the adress of the binary in format of chars '0' & '1'.
 *
 * Return: the converted number in decimal representation.
 * or `0' there is one or more chars in the string b that is not 0 or 1.
 * or `0' if NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len, result, pow = 1;

	if (!b)
		return (0);
	for(len = 0; b[len]; ++len)
	{
		if(b[len] != '0' && b[len] != '1')
			return (0);
	}
	for (--len, result = 0;len >= 0; pow *=2, --len)
	{
		if (b[len] == '1')
			result += pow;
	}
	return (result);
}

