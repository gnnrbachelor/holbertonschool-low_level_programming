#include "holberton.h"
#include <stdio.h>

/**
 * reverse_num - helper function to recursively print number
 *
 * @n: number to print
 *
 * Return: Void;
 */

void reverse_num(unsigned long int n)
{
	if (n < 1)
		return;
	reverse_num(n >> 1);

	_putchar((n & 1) + '0');
}

/**
 * print_binary - Converts to binary
 *
 * @n: Number to convert
 *
 *Return: Converted number or 0
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
		putchar('0');

	if (n == 1)
		putchar('1');

	if (n > 1)
		reverse_num(n);
}

