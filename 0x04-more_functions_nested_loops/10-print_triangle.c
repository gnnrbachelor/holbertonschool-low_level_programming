#include "holberton.h"

/**
 * print_triangle - prints triangle
 *
 * @size: number of times printed
 *
 * Return: void
 */

void print_triangle(int size)
{
	int i;
	int j;
	int lcount;

	if (size > 0)
	{
		for (lcount = 1; lcount <= size; lcount++)
		{
			for (i = size - lcount; i > 0; i--)
				_putchar(' ');

			for (j = 0; j < lcount; j++)
				_putchar('#');

			_putchar('\n');
		}
	}
	_putchar('\n');
}
