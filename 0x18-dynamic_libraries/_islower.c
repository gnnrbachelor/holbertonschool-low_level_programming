#include "holberton.h"

/**
 * islower - Checks for lower
 * @c: character
 * Description: Checks for lower case char
 * Return: 0 or 1
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
