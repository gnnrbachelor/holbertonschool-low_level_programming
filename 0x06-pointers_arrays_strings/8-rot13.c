#include "holberton.h"

/**
 * rot13 - Applies rot13 code
 *
 * @s: String
 *
 * Return: s
 */

char *rot13(char *s)
{
	int i;
	int j;

	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; j < 59; j++)
		{
			if (*(s + i) == alpha[j])
			{
				*(s + i) = rot13[j];
				break;
			}

		}
	}
	return (s);
}
