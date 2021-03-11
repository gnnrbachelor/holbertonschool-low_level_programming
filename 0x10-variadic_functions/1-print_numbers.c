#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_numbers - Prints numbers
 *
 * @separator: String to print between num
 * @n: Number of ints
 *
 * Return: Void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numargs;
	unsigned int current_number;

	if (n == 0)
		return;

	va_start(numargs, n);

	for (i = 0; i < n; i++)
	{
		current_number = va_arg(numargs, int);
		if (i != n - 1 && separator != NULL)
			printf("%d%s", current_number, separator);
		else
			printf("%d", current_number);

	}
	printf("\n");

	va_end(numargs);
}
