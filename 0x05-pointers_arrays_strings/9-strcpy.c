#include "main.h"
/**
 * _strcpy - copies a string from a source to a destination
 * @dest: pointer to the destination
 * @src: pointer to the source
 * return: always 0 upon success
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}

	return(dest);
}
