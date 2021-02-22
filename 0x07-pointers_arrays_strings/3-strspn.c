#include "holberton.h"

/**
 * _strchr - Finds first occurance of c
 *
 * @s: string
 * @c: character for search
 *
 * Return: First occurence or NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i]  == c)
			return (s + i);

	return ('\0');
}
