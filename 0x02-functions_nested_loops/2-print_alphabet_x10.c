#include "holberton.h"

/**
 * print_alphabet - prints the alphabet
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char c = 'a';
	int i = 10;

	while (i > 0)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		i--;
		_putchar('\n');
	}
}
