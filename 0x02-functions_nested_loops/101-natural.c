#include <stdio.h>

/**
 * main - prints natural number to 98
 *
 * Return: 0
 */

int  main(void)
{
	int n;
	int sum;

	for (n = 0; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			sum += n;
			printf("%d\n", sum);
		}
	}
	return (0);
}