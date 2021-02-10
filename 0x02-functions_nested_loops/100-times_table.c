/*
 * File: 100-times_table.c
 * Description: Prints times table to n
 */

#include "holberton.h"

/**
 * Function: times_table- Prints times table to n
 *
 */


int print_times_table(int n)
{
	int cand;
	int mul;
	int prod;

	if (n > 15 || n < 0)
		return (-1);

	for (cand = 0; cand < n; cand++)
	{
		_putchar('0');
		for (mul = 1; mul <= n; mul++)
		{
			_putchar(',');
			_putchar(' ');
			prod = mul * cand;
			if (prod >= n)
			{
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}
			else
			{
				_putchar(' ');
				_putchar((prod % 10) + '0');
			}

		}
		_putchar('\n');
	}

}
