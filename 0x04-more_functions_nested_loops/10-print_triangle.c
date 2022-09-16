#include "main.h"
/**
 * print_triangle - prints a triangle with the # character
 * @size: size of the trangle
 * Return: nothing this a void function
 */
void print_triangle(int size)
{
	int i;
	int x;
	int j;

	for (i = 0; i < size; i++)
	{
		for (j = size - 1 - i; j > 0; j--)
		{
			_putchar(' ');
		}
		for (x = 0; x <= i; x++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
