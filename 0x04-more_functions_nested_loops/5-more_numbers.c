#include "main.h"
/**
 * more_numbers - this function prints numbers from 0 to 14 10 times
 *
 * Return: nothing since this is avoid function
 */
void more_numbers(void)
{
	int i;
	int c;

	for (i = 0; i < 10; i++)
	{
		c = 0;
		while (c <= 14)
		{
			if (c >= 10)
			{
				_putchar(c / 10 + '0');
			}
			_putchar(c % 10 + '0');
			c++;
		}
		_putchar('\n');
	}
}
