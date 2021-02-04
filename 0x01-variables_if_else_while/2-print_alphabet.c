#include <stdio.h>

/**
 * main - Entry point
 * @void: no parameter
 *
 * Description: Prints message using putchar
 * Return:  0
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
		putchar('\n');
	}
}


