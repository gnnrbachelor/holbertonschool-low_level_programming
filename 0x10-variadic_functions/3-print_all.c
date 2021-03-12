#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <stdarg.h>

void print_c(va_list *arg);
void print_i(va_list *arg);
void print_f(va_list *arg);
void print_s(va_list *arg);

/**
 * print_all - Prints everything
 *
 * @format: format for print
 *
 * Return: Void
 */


void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	unsigned int j;
	char *separator = "";
	va_list arg;
	print_t print_array[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s},
		{NULL, NULL}
	};

	va_start(arg, format);

	while (format && format[i])
	{
		j = 0;
		while (print_array[j].data_type)
		{
			if (*(print_array[j].data_type) == format[i])
			{
				printf("%s", separator);
				print_array[j].format(&arg);
				separator = ",";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(arg);
	printf("\n");
}

/**
 * print_c - Prints characters
 *
 * @arg: char
 *
 * Return: Void
 */

void print_c(va_list *arg)
{
	printf("%c", va_arg(arg, int));
}

/**
 * print_i - Prints integers
 *
 * @arg: int
 *
 * Return: Void
 */

void print_i(va_list *arg)
{
	printf("%i", va_arg(arg, int));
}

/**
 * print_f - Prints floats
 *
 * @arg: float
 *
 * Return: Void
 */

void print_f(va_list *arg)
{
	printf("%f", va_arg(arg, double));
}

/**
 * print_s - Prints strings
 *
 * @arg: string
 *
 * Return: Void
 */

void print_s(va_list *arg)
{
	char *s = va_arg(arg, char *);

	if (s == NULL)
		s = "(nil)";
	printf("%s", s);
}
