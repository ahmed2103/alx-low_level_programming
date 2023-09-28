/**
 * get_bit - gives bit value at given index starts from `0'
 * @n: decimal number that has the bit.
 * @index: index is the index, starting from 0 of the bit you want to get.
 *
 * Return: the value of a bit at a given index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);
	return((n >> index) & 1)
}
