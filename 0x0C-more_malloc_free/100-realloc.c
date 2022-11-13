#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a arrayy to another
 * @ptr: pointer to the array
 * @old_size: old size of the array
 * @new_size: new size of the array
 * Return: pointer to a new array or NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *mem;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		mem = malloc(new_size);

		if (mem == NULL)
			return (NULL);

		return (mem);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	mem = malloc(new_size);

	if (mem == NULL)
	{
		free(ptr);
		return (NULL);
	}


	free(ptr);
	return (mem);
}
