#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <strings.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings
 *
 * @separator:
 * @n: Number of arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *s;
	unsigned int i;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(strings, char *);
		if (s == NULL)
		{
			printf("(nil)");
			return;
		}

		printf("%s", s);

		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);

}
