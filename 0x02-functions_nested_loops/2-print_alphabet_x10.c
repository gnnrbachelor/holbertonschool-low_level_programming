#include "holberton.h"

/**
 * print_alphabet - prints the alphabet
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	char c = 'a';
	int i = 10;

	while (i > 0)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		i--;
		c = 'a';
		_putchar('\n');
	}
}
