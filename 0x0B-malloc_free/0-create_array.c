#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - Creates array of chars
 *
 * @size: size
 * @c: character
 *
 * Return: Pointer to array or 0
 *
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (0);

	array = malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
