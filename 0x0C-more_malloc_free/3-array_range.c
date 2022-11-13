#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers between two values
 * @min: minimum value of the array
 * @max: maximum value of the array
 * Return: returns the array, else if min > max or malloc fails NULL
 */
int *array_range(int min, int max)
{
	int len = 0, i;
	int *nums;

	if (min > max)
		return (NULL);

	len = max - min + 1;
	nums = malloc(sizeof(int) * len);

	if (nums == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		nums[i] = min++;

	return (nums);
}
