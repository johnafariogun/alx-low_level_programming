#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints sum of two diagonals as a square matrix
 * @a: array of arrays
 * @size: of the array
 * this doesn't work cause the pointer to the array points to an array and when derefereced
 * points to just a single array as pointer to an array does
 * it can only be correctes if the pointer was defined as int ** or
 * int *a[N] like task 7
 */
void print_diagsums(int *a, int size)
{
	int i = 0, j = 0, result, result2;

	while (i < size)
	{
		result += a[i][j];
		i++;
		j++;
	}

	j = 0;

	while (i >= 0)
	{
		result2 += a[i][j];
		i--;
		j++;
	}

	printf("%d, %d\n", result, result2);
}
