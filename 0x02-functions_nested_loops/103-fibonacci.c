#include <stdio.h>
/**
 * main - prints even values fibonacci sequence below 4000000
 * Return: always 0
 */
int main(void)
{
	int i;
	unsigned long f1 = 0, f2 = 1, sum;
	double final_sum;

	for (i = 0; i<= 4000000; i++)
	{
		sum = f1 + f2;
		
		if ((sum % 2) == 0)
			final_sum += sum;

		f1 = f2;
		f2 = sum;
	}
	printf("%.0f\n", final_sum);

	return (0);
}
