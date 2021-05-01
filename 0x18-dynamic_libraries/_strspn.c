#include "holberton.h"

/**
 * _strspn - Returns bytes of substring
 *
 * @s: string
 * @accept: string
 *
 * Return: Number of bytes of substring
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int count = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				count++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (count);
		}
	s++;
	}

	return (count);
}

