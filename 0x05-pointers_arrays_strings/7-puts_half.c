#include "main.h"
/**
 * puts_half- this prints out half of a string
 * @str: pointer to the string to be halfed
 * return: always 0
 */
void puts_half(char *str)
{
	int i = 0, length = 0, n;


	while (str[i++])
	{
		length++;
	}

	if ((length % 2) == 0)
	{
		n = length / 2;
	}

	else
	{
		n = (length + 1) / 2;
	}
	for (i = n; i < length; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
