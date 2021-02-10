/*
 * File: 7-print_last_digit.
 * Description: Prints last digit
 */

#include "holberton.h"

/**
 * print_last_digit - Prints last digit.
 * @n: integer
 * Return: n
 */


int print_last_digit(int n)
{
	int d;

	d = n % 10;
	if (d < 0)
	{
		d *= -1;
		_putchar(d + '0');
	}
	else
		_putchar(d + '0');
	return (d);
}
