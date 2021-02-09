#include "holberton.h"

/**
 * _islower: Checks if character is lower case
 *
 * @c: character value
 *
 * Return: 1 or 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}



