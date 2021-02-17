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
