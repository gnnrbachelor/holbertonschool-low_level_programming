#include "dog.h"

/**
 * init_dog - Initializes dog struct
 *
 * @d: struct
 * @name: name
 * @age: age
 * @owner: owner name
 *
 * Return: Void;
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

