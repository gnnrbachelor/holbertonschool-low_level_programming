#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 *
 * @s1:String 1
 * @s2: String 2
 *
 * Return: Concatenated string or NULL
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;
	int len = 0;
	char *n_array;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len++;

	for (i = 0; s2[i]; i++)
		len++;

	n_array = malloc(sizeof(char) * (len + 1));

	if (n_array == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		n_array[i] = s1[i];

	for (j = 0; s2[j]; j++, i++)
		n_array[i] = s2[j];

	n_array[len + 1] = '\0';

	return (n_array);

}
