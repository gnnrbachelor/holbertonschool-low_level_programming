#include <stdio.h>

/**
 * main - Entry point
 * @void: no parameter
 *
 * Description: Prints # 00 to 99
 * Return:  0
 */

int main(void)
{
	int tens;
	int ones;
	int hundreds;

	for (hundreds = 0; hundreds < 10; hundreds++)
	{

		for (tens = (hundreds + 1); tens < 10; tens++)
		{
			for (ones = (tens + 1); ones < 10; ones++)
			{
				putchar((hundreds % 10) + '0');
				putchar((tens % 10) + '0');
				putchar((ones % 10) + '0');
				if (tens == 8 && ones == 9)
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
