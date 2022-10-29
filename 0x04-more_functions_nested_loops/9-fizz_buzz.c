#include "main.h"
#include <stdio.h>
/**
 * main - prints Fizz, Buzz, FizzBuzz for multiples of 3 and 5 and both
 *
 *
 * Return: Always 0
 */
int main(void)
{
	int x = 1;

	while (x < 101)
	{
		if (x % 3 == 0 && x % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (x % 3 == 0)
		{
			printf("Fizz");
		}
		else if (x % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", x);
		}
		putchar(' ');
		x++;
	}
	printf("\n");
	return (0);
}
