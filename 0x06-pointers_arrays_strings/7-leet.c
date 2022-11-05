#include "main.h"
/**
 * leet -  a function that coverts words to leet equivalent
 * @str: string to be converted
 * Return: returns the word
 */
char *leet(char *str)
{
	int i = 0, i2;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};
	char replace[8] = {'0', '1', '-', '3', '4', '-', '-', '7'};

	while (str[i])
	{
		for (i2 = 0; i2 <= 7; i2++)
		{
			if (str[i] == leet[i2] ||
			    str[i] - 32 == leet[i2])
				str[i] = replace[i2];
		}

		i++;
	}

	return (str);
}
