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

	num1 = 0;
	num2 = 1;

	for (i = 0; i < 50; i++)
	{
		sum = num1 + num2;
		printf("%ld", sum);
		num1 = num2;
		num2 = sum;

		if (i == 49)
		{
			printf("\n");
		}
		else
			printf(", ");
	}
	printf("\n");
	return (0);
}
