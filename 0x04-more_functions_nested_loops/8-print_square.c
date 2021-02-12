#include "holberton.h"

/**
 * print_square - prints squares
 *
 * @size: determines square size
 *
 * Return: void
 */

void print_square(int size)
{
	int height;
	int width;

	if (size > 0)
	{
		for (height = 0; height < size; height++)
		{
			for (width = 0; width < size; width++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
