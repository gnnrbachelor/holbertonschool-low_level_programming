#include "holberton.h"

/**
 * _isupper - check for uppercase
 *
 * @c: character
 *
 * Return: 1 if upper. 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
