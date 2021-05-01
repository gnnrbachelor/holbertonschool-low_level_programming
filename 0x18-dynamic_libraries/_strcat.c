#include "holberton.h"

/**
 * _strncat - Concatenates src to dest
 *
 * @dest: String
 * @src: String
 * @n: Number of characters to concat
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = 0;
	int c = 0;

	while (dest[len] != '\0')
		len++;

	while (src[c] != '\0' && c < n)
		dest[len++] = src[c++];

	dest[len++] = '\0';

	return (dest);
}

