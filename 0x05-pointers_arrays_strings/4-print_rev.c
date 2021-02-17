#include "holberton.h"

/**
 * print_rev - prints string in reverse
 *
 * @str: string to be reversed
 *
 * Return: void
 */

void print_rev(char *str)
{
	int i = 0;
	int j;

	while (str[i] != '\0')
	{
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(str[j]);
	}

	_putchar('\n');
}
