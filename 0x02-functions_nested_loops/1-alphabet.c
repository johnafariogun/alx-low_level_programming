#include "main.h"
/**
 * print_alphabet - check the code.
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar (alphabet);
		alphabet++;

	}
	_putchar ('\n');
}
