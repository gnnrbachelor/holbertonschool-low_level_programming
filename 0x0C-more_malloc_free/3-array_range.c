#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - Creates array of integers
 *
 * @min: Min value
 * @max: Max value
 *
 * Return: Pointer to array of values or NULL
 */

int *array_range(int min, int max)
{
	int i, j;
	int *p;

	if (min > max)
		return (NULL);

	p = malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
		return (NULL);

	for (i = 0, j = min; i <= (max - min); i++, j++)
		p[i] = j;

	return (p);
}
