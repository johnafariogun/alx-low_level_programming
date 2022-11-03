#include "main.h"
/**
 * rev_string- this reverses a string array
 * @s: pointer to the array
 * return: void always 0
 */
void rev_string(char *s)
{
	char temp[300];
	char *p;
	int c = 0;

	*p = s;
	while (*s != '\0')
	{
		temp[c] = *s;
		s++;
		c++;
	}
	c=0;

	while (s>temp)
	{
		s--;
		*s=temp[c];
		c++;
	}
}

