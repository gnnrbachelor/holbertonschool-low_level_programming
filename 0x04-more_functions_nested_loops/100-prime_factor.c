/**
 * main - Calculates largest prime.
 *
 * Return: Always 0.
 */

#include <stdio.h>
#include <math.h>

int main(void)
{
	long lf;
	long i;
	long n = 612852475143;

	for (i = 1; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			lf = n / i;
		}
	}
	printf("%ld\n", lf);

	return (0);
}
