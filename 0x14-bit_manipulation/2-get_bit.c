#include "holberton.h"

/**
 * get_bit - Gets bit at given index
 *
 * @n: Pointer to number
 *
 * @index: Index
 *
 * Return: Value or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int got_bit;

	got_bit = (n >> index & 1);
	return (got_bit);
}
