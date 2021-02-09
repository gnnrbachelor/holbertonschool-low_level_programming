#include "holberton.h"

/*
 * 7-print_last_digit.c
 *
 *
 * /

/**
 * Function: print_last_digit
 *
 * @n: The integer
 *
 * Description: Returns last digit
 * Return: 0
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		n = (n % 10) * (-1);
		_putchar(n);
		return(n);
	}
	else
	{
		n = (n % 10);
		_putchar(n);
		return(n);
	}
}
