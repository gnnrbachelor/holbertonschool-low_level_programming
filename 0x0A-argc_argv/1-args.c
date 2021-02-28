#include <stdio.h>

/**
 * main - Prints number of arguments
 *
 * @argc: Number of arguments
 * @argv: Arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[] __attribute((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
