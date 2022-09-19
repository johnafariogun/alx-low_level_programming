#include "main.h"
/**
 * puts2 - prints second character after the previous
 * @str: the string
 */
void puts2(char *str)
{
	int i;
	char l;

	for (i = 0; str[i] != 0; i++)
	{
		if (i % 2 == 0)
		{
			l = str[i];
			_putchar(l);
		}
	}
	_putchar('\n');
}
