#include "main.h"
/**
 * print_line - this prints a line of length n times
 * @n: this is the length of the line
 * Return: nothing
 */
void print_line(int n)
{
	int i;

	if (n >= 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
