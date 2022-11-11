#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - pointer to a 2dimensional array of ints with initializer 0
 * @width: width of the 2d array
 * @height: height of the 2d array
 * Return: returns the array else Null
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(sizeof(int) * height);

	if (array == NULL)
	{
		free(array);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int *) * width);

		if (array[i] == NULL)
		{
			for (; i >= 0; i--)
				free(array[i]);

			free(array);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	}

	return (array);
}
