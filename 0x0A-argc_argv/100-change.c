#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints minimum number of coins for change
 *
 * @argc: Number of arguments
 * @argv: Arguments
 * Return: 0
 */

int make_change(int n)
{
	int coins = 0;
	while (n > 0)
	{
		while (n >= 25)
		{
			n -= 25;
			coins++;
		}
		while (n >= 10)
		{
			n -= 10;
			coins++;
		}
		while (n >= 5)
		{
			n -= 5;
			coins++;
		}
		while (n >= 2)
		{
			n -= 2;
			coins++;
		}
		if (n == 1)
		{
			n -= 1;
			coins++;
		}
	}
	return (coins);
}

int main(int argc, char *argv[])
{
	int coins, n;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);

	if (n < 0)
	{
		printf("%d\n", 0);
		return 0;
	}

	coins = make_change(n);

	printf("%d\n", coins);

	return (0);

}
