#include "main.h"
/**
 * print_times_table - prints the times table with the limit of the input
 * @n: limit of the timestable
 */
void print_times_table(int n)
{
	int num, multiple, product;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');

			for (multiple = 1; multiple <= n; multiple++)
			{
				_putchar(',');
				_putchar(' ');

				product = num * multiple;

				if (product <= 99)
					_putchar(' ');

				if (product <= 9)
					_putchar(' ');

				if (product >= 100)
				{
					_putchar((product / 100) + '0');
					_putchar(((product / 10) % 10) + '0');
				}

				else if (product <= 99 && product >= 10)
				{
					_putchar((product / 10) + '0');
				}
				_putchar((product % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
