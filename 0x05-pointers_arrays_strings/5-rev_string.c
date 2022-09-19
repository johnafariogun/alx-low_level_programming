#include "main.h"
/**
 * rev_string - reverses any string
 * @s: beginning of string to be reversed
 */
void rev_string(char *s)
{
	char *temp = s;
	char temp_Array[10];
	int c = 0;

	while (*s != '\0')
	{
		temp_Array[c] = *s;
		s++;
		c++;
	}
	c = 0;

	while (s > temp)
	{
		s--;
		*s = temp_Array[c];
		c++;
	}
}
