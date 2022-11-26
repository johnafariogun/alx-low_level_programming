#include "main.h"
/**
 * print_binary - prints the binary representaion of any numnber
 * @n: the number to be printed
 * Return: void nothing
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
