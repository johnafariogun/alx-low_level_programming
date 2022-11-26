#include "main.h"
/**
 * get_bit - gets the value of a bit at a given index.
 *
 * @n: the number
 * @index: the index to start from
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/* this is to confirm that index is not beyond the range of n*/
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
