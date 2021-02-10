#include <stdio.h>

/**
 * print_to_98 - prints natural number to 98
 * @n: number to print from
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
