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
	int i, j;
	unsigned int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == s[j])
			{
				count++;
				break;
			}
		}
	}
	return (count);
}
