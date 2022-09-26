#include "main.h"

/**
 * _memset - fills n number of memory space with constant byte b
 * @s: pointer to memory space
 * @b: byte to fill with
 * @n: number of spaces to be filled
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int  i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
