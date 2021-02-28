#include "holberton.h"

/**
 * _strcat - Concatenates src to dest
 *
 * @dest: String
 * @src: String
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int len = 0;
	int c = 0;

	while (dest[len] != '\0')
		len++;

	while (src[c] != '\0')
		dest[len++] = src[c++];

	dest[len++] = '\0';

	return (dest);
}
