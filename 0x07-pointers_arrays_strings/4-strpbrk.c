#include "main.h"
/**
 * _strpbrk - locates bytes in strings accept and s
 * @s: string s
 * @accept: string accept
 * Return: pointer to the bytes in s
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accept[j])
		{
			return (s + i);
		}
	}
	return (0);
}
