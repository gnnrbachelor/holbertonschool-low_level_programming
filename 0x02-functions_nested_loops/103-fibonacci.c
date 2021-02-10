#include <stdio.h>

/**
 * main - prints natural number to 98
 * 
 * Return: 0 means success
 */

int  main(void)
{
	int i;
	long num1;
	long num2;
	long sum;
	long long sum2;

	num1 = 1;
	num2 = 2;

	for (i = 1; i < 4000000; i++)
	{
		sum = num1 + num2;
		if (sum % 2 == 0)
			sum2 += sum;

		num1 = num2;
		num2 = sum;

	}
	printf("%lld\n", sum2);
	return (0);
}
