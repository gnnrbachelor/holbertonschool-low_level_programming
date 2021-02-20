#include "holberton.h"

/**
 * neg_test - Deals with negative val.
 *
 * @n: Integer to evaluate
 *
 * Return: integer
 */

int neg_test(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	return (n);
}

/**
 * print_number - Prints number.
 *
 * @n: Integer to print
 *
 * Return: void
 */

void print_number(int n)
{
	unsigned int i;

	i = neg_test(n);

	if (i / 10 > 0)
		print_number(i / 10);

	_putchar((i % 10) + '0');
}

