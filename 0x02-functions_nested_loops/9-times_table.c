#include "main.h"
/**
 * times_table - Print 9 times table
 *
 * Return: Void.
 */

void times_table(void)
{
	int x, y, result;

	for (y = 0; y < 10; y++)
	{
		for (x = 0; x < 10; x++)
		{
			result = x * y;
			if (x == 0)
			{
				_putchar(result + '0');
			}
			else if (result >= 10)
			{
				_putchar(' ');
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(result + '0');
			}
			if (x != 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
