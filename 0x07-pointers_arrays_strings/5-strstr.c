#include "holberton.h"

/**
 * _strstr - Finds substring
 *
 * @haystack: String
 * @needle: String
 *
 * Return: Pointer to beginning of substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j;
	int match;

	while (haystack[i])
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			match = i;
			return (haystack + match);
		}
	i++;
	}
	return (0);
}
