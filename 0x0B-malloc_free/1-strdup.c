#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - Returns pointer to copied string
 *
 * @str: String to copy
 *
 * Return: Pointer to string or NULL
 */

char *_strdup(char *str)
{
	char *array;
	int len = 0;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;

	array = malloc(sizeof(char) * (len + 1));

	if (array == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
		array[j] = str[j];

	array[len] = '\0';

	return (array);
}
