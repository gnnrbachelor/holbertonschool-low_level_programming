#include "holberton.h"

/**
 * _strpbrk - Returns bytes of first match
 *
 * @s: string
 * @accept: string
 *
 * Return: Number of bytes of substring
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j;

	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
				return (s + i);
		j++;
		}
	i++;
	}
	return (0);
}

