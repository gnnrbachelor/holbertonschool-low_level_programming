#include "holberton.h"

/**
 * leet - Applies leet code
 *
 * @s: String
 *
 * Return: s
 */

char *leet(char *s)
{
	int i;
	int j;

	char alpha[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (*(s + i) == alpha[j])
				*(s + i) = num[j];
		}
	}
	return (s);
}
