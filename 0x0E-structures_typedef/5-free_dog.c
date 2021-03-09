#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees dog
 *
 * @d: Dog instance
 *
 * Return: Void
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
