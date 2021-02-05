#include <stdio.h>

/**
 * main - Entry point
 * @void: no parameter
 *
 * Description: Prints alphabet using putchar
 * Return:  0
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
			putchar(c);
	}
	putchar('\n');
	return (0);
}


