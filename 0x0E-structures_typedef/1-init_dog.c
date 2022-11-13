#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - creates initial values for dog struct
 * @d: dog to be used as the initial
 * @name: name of the dog
 * @age: age of the dog
 * @owner: dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
