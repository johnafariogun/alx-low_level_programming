#include "main.h"
void puts2(char *str)
{
	int i=0;

	for ( i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i+=2]);
	}
	_putchar('\n');
}
