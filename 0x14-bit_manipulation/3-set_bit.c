#include "holberton.h"

/**
 * set_bit - Sets to 1 vlue and index
 *
 * @n: Pointer to num
 * @index: Index
 *
 * Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	*n = *n | 1 << index;
	return (1);
}
