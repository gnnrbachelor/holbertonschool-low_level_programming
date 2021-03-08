#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#define NIL ("(nil)")

/**
 * print_dog - Prints dog struct
 *
 * @d: dog struct
 *
 * Return: Void
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name == NULL)
			d->name = NIL;

		if (d->owner == NULL)
			d->owner = NIL;

		printf("Name: %s\nAge: %.6f\nOwner: %s\n", d->name, d->age, d->owner);

	}
}
