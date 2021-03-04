#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 *
 * @s1: String 1
 * @s2: String 2
 * @n: Bytes
 *
 * Return: Pointer to space containing s1
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j = 0;
	unsigned int len = n;
	char *c;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s1 = "";

	for (i = 0; s1[i]; i++)
		len++;

	c = malloc(sizeof(char) * (len + 1));

	if (c == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		c[i] = s1[i];

	for (; s2[j] &&  j < n; j++)
		c[i++] = s2[j];

	c[i] = '\0';
	return (c);
}
