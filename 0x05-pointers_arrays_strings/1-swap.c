#include "holberton.h"

/**
 * swap_int  - swaps values of two integers
 *
 * @a: First integer
 * @b: Second integer
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
