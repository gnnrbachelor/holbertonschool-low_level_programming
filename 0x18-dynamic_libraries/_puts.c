include "holberton.h"

/**
 * _puts - prints a string
 *
 * @str: string to be printed
 *
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;
	int j;
	int len;

	while (str[i] != '\0')
	{
		len++;
		i++;
	}

	for (j = 0; j < len; j++)
		_putchar(str[j]);

	_putchar('\n');
}
