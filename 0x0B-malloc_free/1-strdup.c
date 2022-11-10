#include "main.h"
#include <stdlib.h>
/**
 * _strdup - copies a code and returns a string pointer of certain size
 * @str: string to be copied
 * Return: the string else null
 */
char *_strdup(char *str)
{
	char *duplicate;
	int i, length = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		length++;


	duplicate = malloc(sizeof(char) * (length + 1));

	if (duplicate == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		duplicate[i] = str[i];

	duplicate[length] = '\0';

	return (duplicate);
}
