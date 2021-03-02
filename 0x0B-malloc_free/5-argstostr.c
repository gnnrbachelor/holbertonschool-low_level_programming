#include "holberton.h"
#include <stdlib.h>

/**
 * char *argstostr - Concatenates args
 *
 * @ac: Number of arguments
 * @av: Arguments
 *
 * Return: Void
 */

char *argstostr(int ac, char **av)
{
	int i, j, len;
	int k = 0;
	char *final_str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			len++;
		}
	}

	final_str = malloc(sizeof(char) * (len + 1));

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			final_str[k++] = av[i][j];

		final_str[k++] = '\n';
	}

	final_str[k++] = '\0';
	return (final_str);

}
