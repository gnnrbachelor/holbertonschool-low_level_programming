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
	int j;

	for (i = 0; i < 10; i++)
		putchar((i % 10) + '0');
	for (j = 'a'; j < 'f'; j++)
		putchar(j);

	putchar('\n');
	return (0);
}
