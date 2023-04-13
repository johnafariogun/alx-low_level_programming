#include "search_algos.h"
/**
 * linear_search - this searches an array item after item for one that
 * matches a certain value
 * @array: the array to be searched
 * @size: size of the array to be searched
 * @value: value to be searched for
 * Return: the index of the value in the array, else -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}

