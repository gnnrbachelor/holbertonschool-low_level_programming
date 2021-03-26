#include "holberton.h"

/**
 * flip_bits - Returns number of bits to flip
 *
 * @n: Number
 *
 * @m: Second Number
 *
 * Return: Number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count, diff;

	diff = n ^ m;

	count = 0;
	while (diff > 0)
	{
		count++;
		diff &= (diff - 1);
	}

	return (count);



}
