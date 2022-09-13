#include "main.h"
/**
 * print_alphabet_x10 - function that prints lowercase alphabet 10 times
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int times = 0;

	while (times < 10)
	{
		char alphabet = 'a';

		while (alphabet <= 'z')
		{
			_putchar (alphabet);
			alphabet++;
		}
		_putchar ('\n');
		times++;
	}
}
