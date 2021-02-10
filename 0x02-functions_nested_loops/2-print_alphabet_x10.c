/*
 * File: 2-print_alphabet_x10.c
 * Description: Prints alphabet 10x
 */

#include "holberton.h"

/**
 * print_alphabet - Prints alphabet 10x
 * Return: void
 */


void print_alphabet(void)
{
	int c;
	int count;

	for (count = 0; count < 10; count++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
