#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializing
 * @d: the dog
 * @name: dog
 * @age: the age
 * @owner: the owner
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
