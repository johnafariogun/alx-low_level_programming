#include <stdio.h>
/**
 * main - prints even values fibonacci sequence below 4000000
 * Return: always 0
 */
int main(void)
{
	unsigned long f1 = 0, f2 = 1, sum;
	double final_sum;

	while (1)
	{
		sum = f1 + f2;
		if (sum > 4000000)
			break;
		if ((sum % 2) == 0)
			final_sum += sum;

		f1 = f2;
		f2 = sum;
	}
	printf("%.0f\n", final_sum);

	return (0);
}
