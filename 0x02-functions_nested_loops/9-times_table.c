/*
 * File: 9-times_table
 * Description: Prints times table to 9
 */

#include "holberton.h"

/**
 * Function: times_table- Prints times table to 9
 *
 */


void times_table(void)
{
	int cand;
	int mul;
	int prod;

	for (cand = 0; cand < 9; cand++)
	{
		_putchar('0');
		for (mul = 1; mul <= 9; mul++)
		{
			_putchar(',');
			_putchar(' ');
			prod = mul * cand;
			if (prod >= 9)
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
