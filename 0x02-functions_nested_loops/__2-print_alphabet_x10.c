/**
 * print_alphabet - prints the alphabet
 *
 * Return: 0
 */
#include "holberton.h"


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
