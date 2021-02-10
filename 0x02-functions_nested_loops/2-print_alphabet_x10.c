/**
 * print_alphabet - prints the alphabet
 *
 * Return: 0
 */
#include "holberton.h"


void print_alphabet(void)
{
	int c;
	int count;

	for (count = 0; count < 10; count++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
