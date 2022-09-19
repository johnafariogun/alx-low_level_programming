#include "main.h"
/**
 * _strlen - reads a string for the number of characters
 * @s: pointer
 * Return: length of the success
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		s++;
		length++;
	}
	return (length);
}
