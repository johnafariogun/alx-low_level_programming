#include "main.h"
/**
 * print_square - Print a square of length n and with #
 * @n : gives the length of the aquare
 * Return: nothing
 */
void print_square(int n)
{
	int i;
	int j;

	for (j = 0; j < n; j++)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
