#include "main.h"
/**
 * _strchr - checks for characters and returns pointer to the character
 * @s: pointer
 * @c: character
 * Return: returns pointer to the character
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; *(s + 1); i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
