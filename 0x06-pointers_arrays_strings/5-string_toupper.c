#include "holberton.h"

/**
 *  string_toupper - Converts lowercase to upper.
 *
 * @s: Char for conversion
 *
 * Return: String
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
	if (s[i] >= 'a' && s[i] <= 'z')
		s[i] = s[i] - 32;
	i++;
	}
	return (s);

}
