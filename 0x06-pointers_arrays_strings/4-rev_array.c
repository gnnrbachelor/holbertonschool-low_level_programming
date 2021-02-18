#include "holberton.h"

/**
 * reverse_array - reverses array
 *
 * @a: Array
 * @n: Number of elements in array
 *
 * Return: dest
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	n--;

	while (i < n)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		i++;
		n--;
	}
}
