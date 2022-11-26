#include "main.h"
/**
 * flip_bits - returns the no. of bits to flip to get one number from another
 * @n: the first number
 * @m: the second number
 * Return: the number of bytes in decimal
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num = n ^ m;
	int i = 0, index = ((sizeof(unsigned long int) * 8) -1);

	for (; index >= 0; index--)
	{
		if (((num >> index) & 1) == 1)
			i++;
	}

	return (i);
}
