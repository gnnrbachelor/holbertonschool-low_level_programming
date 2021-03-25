#include "holberton.h"
#include <stdio.h>

/**
 * binary_to_uint - Converts binary to unsigned int
 *
 * @b: Number to convert
 *
 *Return: Converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	unsigned int len;

	if (b == '\0')
		return (0);

	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		decimal = decimal << 1;
		if (b[len] == '1')
			decimal += 1;

	}

	return (decimal);

}
