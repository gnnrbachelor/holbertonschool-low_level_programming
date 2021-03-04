#include "holberton.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block
 *
 * @ptr: Pointer to old mem
 * @old_size: Old size
 * @new_size: New size
 *
 * Return: Pointer to new memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *cpy;
	char *p;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		p = malloc(new_size);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	p = malloc(new_size);
	cpy = p;

	if (p == NULL)
		return (NULL);

	for (i = 0; i < old_size; i++)
		p[i] = cpy[i];

	return (cpy);
}
