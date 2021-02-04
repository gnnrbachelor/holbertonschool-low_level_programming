#include <stdio.h>

/**
 * main - Entry point
 * @void: no parameter
 *
 * Description: Prints alphabet in upper and lower case
 * Return:  0
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);

	putchar('\n');
	return (0);
}
