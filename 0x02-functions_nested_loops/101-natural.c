#include <stdio.h>
/**
 * main - calculates the sum of all multiples of 3 and 5 below 1024
 * Return: alqays 0
 */
int main(void)
{
	unsigned int sum = 0, num = 3;

	while (num <= 1024)
	{
		if (num % 3 == 0 || num % 5 == 0)
		{
			sum += num;
		}
		num++;
	}
	printf("%d\n", sum);
	return (0);
}
