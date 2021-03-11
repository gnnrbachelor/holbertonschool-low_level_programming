#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - Calculator
 *
 * @argc: Argument count
 * @argv: Argument array pointers
 *
 * Return: Always 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	int a, b, answer;
	char *c;
	int (*calculate)(int, int);

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	c = argv[2];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if ((*c == '/' || *c == '%') && (a == 0 || b == 0))
	{
		printf("Error\n");
		exit(100);
	}

	calculate = get_op_func(c);

	if (calculate == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	answer = calculate(a, b);
	printf("%d\n", answer);

	return (0);
}

