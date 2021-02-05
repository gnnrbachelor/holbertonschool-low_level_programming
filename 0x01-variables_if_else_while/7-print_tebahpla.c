#include <stdio.h>

/**
 * main - Entry point
 * @void: no parameter
 *
 * Description: Prints alphabet in reverse using putchar
 * Return:  0
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);

	putchar('\n');
	return (0);
}


