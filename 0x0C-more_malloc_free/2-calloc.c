#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for array of byte size and number of elements
 * @nmemb: number of elements
 * @size: size in bytes of the elements
 * Return: if nmemb && size = 0 || malloc fails - NULL, else array pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memory;
	char *temp;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	memory = malloc(nmemb * size);

	if (memory == NULL)
		return (NULL);

	temp = memory;

	for (i = 0; i < (size * nmemb); i++)
		temp[i] = '\0';

	return (memory);
}
