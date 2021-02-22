#include "holberton.h"

/**
 * _memset - Fills memory with constant byte
 *
 * @s: memory address
 * @b: byte
 * @n: number to fill
 *
 * Return:
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
