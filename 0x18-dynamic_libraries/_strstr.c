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
			match = i;
		while (haystack[i] == needle[j])
		{
			i++;
			j++;
		}
		if (needle[j] == '\0')
			return (haystack + match);
	i++;
	}
	return (0);
}
