#include "holberton.h"

/**
 * print_diagonal - prints diagonal line
 *
 * @n: number of times printed
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int spaces;
	int initial;
	int i = 0;

	initial = n;
	if (n <= 0)
		_putchar('\n');
	else
	{
		while (n > 0)
		{
			if (i > 0 && i < initial)
			{
				spaces = i;
				while (spaces)
				{
					_putchar(' ');
					spaces--;
				}
			}
			_putchar('\\');
			_putchar('\n');
			i++;
			n--;
		}
	}
}
