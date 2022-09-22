#include "main.h"

/**
 * _strcat - this function concatenates two strings
 * @dest: variable to be concatenated
 * @src: second variable
 * Return: returns concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
