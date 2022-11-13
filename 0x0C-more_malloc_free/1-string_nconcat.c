#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates string s1 and n bytes of string s2
 * @s1: string s1
 * @s2: string s2
 * @n: number of bytes to be concatenated
 * Return: the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	/* by equating the length of the arrray to n first no need to */
	/* find the length of the second string*/
	unsigned int len = n, i;
	char *dest;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	/*this increases the array by the length of the first string s1*/
	for (i = 0; s1[i]; i++)
		len++;

	dest = malloc(sizeof(char) * (len + 1));

	if (dest == NULL)
		return (NULL);

	len = 0;

	for (i = 0; s1[i]; i++)
		dest[len++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		dest[len++] = s2[i];

	dest[len] = '\0';

	return (dest);
}
