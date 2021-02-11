#include "holberton.h"

/**
 * print_times_table - prints natural number to 98
 * @n: times table to n
 * Return: 0 or --1
 */


int print_times_table(int n)
{
	int cand;
	int mul;
	int prod;

	if (n < 15 && n > 0)
	{
		for (cand = 0; cand < n; cand++)
		{
			_putchar('0');
			for (mul = 1; mul <= n; mul++)
			{
				_putchar(',');
				_putchar(' ');
				prod = mul * cand;
				if (prod < 100)
				{
					_putchar(' ');
				}
				if (prod < 10)
				{
					_putchar(' ');
				}
				if (prod >= 100)
				{
					_putchar((prod / 100) + '0');
					_putchar((prod / 10) % 10 + '0');
				}
				else if (prod < 100 && prod >= 10)
				{
					_putchar((prod / 10) + '0');
				}
				_putchar((prod % 10) + '0');
			}
			_putchar('\n');
		}
	}
	return (-1);
}
