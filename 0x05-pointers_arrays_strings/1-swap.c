#include "main.h"
/**
 * swap_int - this swaps the value of two integers
 * @a: pointer
 * @b: pointer
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
