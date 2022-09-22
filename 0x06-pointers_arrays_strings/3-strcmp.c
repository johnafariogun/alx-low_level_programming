#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: return value of the comparison
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int leftover;

	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	leftover = s1[i] - s2[i];
	return (leftover);
}
