#include "holberton.h"

/**
 * _strncpy - Concatenates src to dest
 *
 * @dest: String
 * @src: String
 * @n: Number of characters to concat
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (*(src + i) != '\0' && i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
