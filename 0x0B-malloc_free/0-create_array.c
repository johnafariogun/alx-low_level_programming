#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array and initializeds it to a char
 * @size: the size of the array
 * @c: initial char
 * Return: the array or null
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
