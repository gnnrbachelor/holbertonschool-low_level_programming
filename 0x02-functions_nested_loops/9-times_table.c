#include "holberton.h"

/**
 * Function: times_table
 * @void
 *
 * Description: Prints times table to 9
 * Return: Always 0
 */

void times_table(void)
{
	int cand;
	int mul;
	int prod;

	for (cand = 0; cand < 10; cand++)
	{
		_putchar('0');
		for (mul = 1; mul < 10; mul++)
		{
			_putchar(',');
			_putchar(' ');
			
			prod = mul * cand;
			if (prod > 10)
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
