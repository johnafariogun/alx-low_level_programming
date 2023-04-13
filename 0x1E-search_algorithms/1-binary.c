#include "search_algos.h"

/**
 * binary_search - this searches an array for a value using the binary
 * search algorithm
 * @array: the array to be searched for
 * @size: size of the array to be searched for
 * @value: the value to be searched for
 * Return: returns the index, or -1 if the array is NULL or the value is
 * not present
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, left_index = 0, right_index = size - 1;

	if (!array)
		return (-1);
	for (; right_index >= left_index;)
	{
		printf("Searching in array: ");
		for (i = left_index; i < right_index; i++)
			printf("%d, ", array[i]);

		printf("%d\n", array[i]);
		i = left_index + (right_index - left_index) / 2;
		if (array[i] == value)
			return (i);

		if (array[i] > value)
			right_index = i - 1;
		else
			left_index = i + 1;
	}
	return (-1);
}
