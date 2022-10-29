#include "main.h"
/**
 * print_diagonal - prints diagonal line
 * @n: number of tims to be printed
 * return: the return value of the function
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			if (i == n - 1)
			{
				continue;
			}
			_putchar('\n');
		}
	}

	_putchar('\n');
}
