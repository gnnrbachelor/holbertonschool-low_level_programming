#include "holberton.h"

/**
 * clear_bit - Sets value to 0 at index
 *
 * @n: Number
 * @index: Index
 *
 * Return: 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	mask = ~(1 << index);

	*n = *n & mask;
	return (1);
}
