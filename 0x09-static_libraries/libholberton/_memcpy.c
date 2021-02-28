#include "holberton.h"

/**
 * _memcpy - Copies memory area
 *
 * @dest: End memory address
 * @src: memory area to copy from
 * @n: size
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
