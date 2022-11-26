#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: a pointer to the decimal of the bit
 * @index: the index of the bit
 * Return: success 1
 * failure -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	/* rhis makes sure that watever is in that index position is strictly*/
	 /* 1 by using exclusive or and comparing it with 1 at that */
	 /* exact position*/
	*n ^= (1 << index);

	return (1);
}
