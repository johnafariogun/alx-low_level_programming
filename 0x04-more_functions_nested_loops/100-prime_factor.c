#include <stdio.h>

/**
 * main -  calculate largest prime of 612852475143
 *
 * Return: Success Always
 */


int main(void)
{
	long int x = 612852475143;
	long int lp;

	for (lp = 2; lp < x; lp++)
	{
		if (x % lp == 0)
		{
			x = x / lp;
		}
	}
	printf("%ld\n", lp);
	return (0);
}
