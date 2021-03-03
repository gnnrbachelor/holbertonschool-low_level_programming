#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints minimum number of coins for change
 *
 * @argc: Number of arguments
 * @argv: Arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int coins = 0;
	int total;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	total = atoi(argv[1]);

	if (total < 0)
		printf("%d\n", 0);

	while (total > 0)
	{
		while (total >= 25)
		{
			total -= 25;
			coins++;
		}
		while (total >= 10)
		{
			total -= 10;
			coins++;
		}
		while (total >= 5)
		{
			total -= 5;
			coins++;
		}
		while (total >= 2)
		{
			total -= 2;
			coins++;
		}
		if (total == 1)
		{
			total -= 1;
			coins++;
		}
	}
	printf("%d\n", coins);
	return (0);

}
