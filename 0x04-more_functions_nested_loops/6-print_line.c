#include "../holberton.h"

/**
 * print_line - prints line
 *
 * @n: line length
 *
 * Return: void
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
