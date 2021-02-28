#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Adds two numbers
 *
 * @argc: Number of arguments
 * @argv: Arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i, j, k;
	int result;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
	}


	for (k = 1; k < argc; k++)
	{
		result += atoi(argv[k]);
	}

	printf("%d\n", result);

	return (0);
}

