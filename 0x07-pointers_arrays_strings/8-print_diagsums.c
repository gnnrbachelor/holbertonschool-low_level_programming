#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - Prints diagonal sums
 *
 * @a: pointer to array
 * @size: of array
 *
 * Return: Sum of values
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	int d1 = 0;
	int d2 = 0;

	for (i = 0; i < size; i++)
	{
		d1 += *(a + ((i * size) + i));
	}

	for (j = 0; j < size; j++)
	{
		d2 += *(a + ((j * size) + (size - 1 - j)));
	}

	printf("%i, %i\n", d1, d2);

}
