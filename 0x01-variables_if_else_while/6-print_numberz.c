#include <stdio.h>

/**
 * main - Entry point
 * @void: no parameter
 *
 * Description: Prints numbers up to 10
 * Return:  0
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar((i % 10) + '0');

	putchar('\n');
	return (0);
}
