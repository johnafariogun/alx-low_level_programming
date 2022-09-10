#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1, num2;

	for (num1 = 48; num1 <= 57; num1++)
	{
		for (num2 = 48; num2 <= 57; num2++)
		{
			if (num1 == num2 || num2 <= num1)
			{
			}
			else
			{
				putchar(num1);
				putchar(num2);
				if (num1 == 56 && num2 == 57)
				{
				}
				else
				{
					putchar(44);
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
