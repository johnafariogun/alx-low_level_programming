#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches a vlaue in a sorted array using jump search algorithm
 * @array: array to be searched in
 * @size: size of the array
 * @value: value to searched for
 * Return: the first index the value is located else if NULL or not present -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, j, k;

	if (!array || size == 0)
		return (-1);

	k = sqrt(size);
	for (i = j = 0; j < size && array[j] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);
		i = j;
		 j += k;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", i, j);

	j = j < k - 1 ? j : k - 1;

	for (; i < j && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}
