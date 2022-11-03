#include "main.h"
#include <stdio.h>
/**
 * print_array - prints an array of size n
 * @a: pointer to an array
 * @n: size of the array
 * return: always 0 on success
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		printf("%d", a[i]);

		if (i == n - 1)
			continue;

		printf(", ");
	}

	printf("\n");
}
