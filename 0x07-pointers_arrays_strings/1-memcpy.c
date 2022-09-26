#include "main.h"
/**
 * _memcpy - copies n bytes from one memory area to another
 * @dest: destination to be copied to
 * @src: source to be copied from
 * @n: number of bytes
 * Return: pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
