#include "holberton.h"

/**
 * check_prime - Checks primality
 *
 * @n: Number
 * @t: test number
 *
 * Return: 1 or 0
 */

int check_prime(int n, int t)
{
	if (n % t == 0)
		return (0);
	if (t * t > n)
		return (1);
	return (check_prime(n, t + 1));
}

/**
 * is_prime_number - Checks primality
 *
 * @n: Number
 *
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	if (n < 2)
		return (0);
	return (check_prime(n, 2));
}

