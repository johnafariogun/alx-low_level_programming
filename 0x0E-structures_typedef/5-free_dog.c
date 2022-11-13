#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - Frees a dog struct
 * @d: dog struct to be freed
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}
