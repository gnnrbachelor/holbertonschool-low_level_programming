#include "function_pointers.h"

/**
 * int_index - Searches for int
 *
 * @array: Array
 * @size: # of elements
 * @int_index: Index of first matching element
 *
 * Return: Index, 0 or -1;
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}



