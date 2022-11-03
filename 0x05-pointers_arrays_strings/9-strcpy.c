#include "main.h"
/**
 * _strcpy - copies a string from a source to a destination
 * @dest: pointer to the destination
 * @src: pointer to the source
 * Return: @dest as the destination
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
