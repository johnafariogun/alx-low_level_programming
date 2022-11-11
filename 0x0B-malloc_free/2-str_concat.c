#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concats two strings and puts them in a  array of
 * both string sizes
 * @s1: string 1
 * @s2: string 2
 * Return: the concatenated string else null
 */

char *str_concat(char *s1, char *s2)
{
	char *duplicate;
	int i = 0, j = 0, length = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		length++;

	duplicate = malloc(sizeof(char) * length);

	if (duplicate == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		duplicate[j++] = s1[i];

	for (i = 0; s2[i]; i++)
		duplicate[j++] = s2[i];

	return (duplicate);

}
