#include "holberton.h"

/**
 * _strlen - counts length of string
 *
 * @s: String
 *
 * Return: void
 */

int _strlen(char *s)
{
	int counter = 0;

	while (*s != '\0')
	{
		counter++;
		s++;
	}
	return (counter);
}

/**
 * _strcpy - copies string
 *
 * @dest: copy
 * @src: original
 *
 * Return: *dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j;

	while (src[i] != '\0')
		i++;

	for (j = 0; j < i; j++)
		dest[j] = src[j];

	dest[i] = '\0';
	return (dest);
}

/**
 * strtow - Splits string into words
 *
 * @str: String
 *
 * Return: Pointer to array of strings
 */

char **strow(char *str)
{
}


