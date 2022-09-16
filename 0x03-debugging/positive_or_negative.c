#include "main.h"
#include <stdio.h>
/**
 * positive_or_negative - Entry point
 *@i: integer to be checked
 * Return: Always 0 (Success)
 */
void positive_or_negative(int i)
{
	int n = i;

	/* your code goes there */
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
}
