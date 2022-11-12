#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc, can be for any data type
 * @b: size of the memory in bytes
 *
 * Return: returns a pointer or 98 as exit code
 */
void *malloc_checked(unsigned int b)
{
	void *malloc_made = malloc(b);

	if (malloc_made == NULL)
		exit(98);

	return (malloc_made);
}
