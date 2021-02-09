#include "holberton.h"

/*
 * 6-abs.c
 *
 *
 * /

/**
 * printsign: Returns absolute value
 *
 * @n: The integer tested
 *
 * Description: Returns values
 * Return: absolute value of integer
 */

int _abs(int n)
{
	if (n >= 0)
		return(n);
	else
		return (-n);
}
