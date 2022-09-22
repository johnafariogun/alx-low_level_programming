#include "main.h"
/**
 * reverse_array - reverses an array
 * @a: a variable pointer
 * @n: first vairable
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j;
	int tmp;

	j = n - 1;

	while (i < j)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		i++;
		j--;
	}
}
