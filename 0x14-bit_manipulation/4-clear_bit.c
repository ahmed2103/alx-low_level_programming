#include "main.h"

/**
 * clear_bit - sets the value of a bit to 1 at a given index.
 * @n: adess of the number
 * @index is the index, starting from 0 of the bit you want to set.
 *
 * Returns: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{	
	if (index > sizeof(*n))
		return (-1);
	*n &= ~;(1 << index);
	return (1);
}
