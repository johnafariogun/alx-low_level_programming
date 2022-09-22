#include "main.h"
/**
 * _strncat - this uses n byter=s at most from src and cuts the rest
 * @dest: firsst array
 * @src: second array
 * @n: number of bytes
 * Return: return value
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		if (j < n)
		{
			dest[i] = src[j];
		}
		else
		{
		}
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
