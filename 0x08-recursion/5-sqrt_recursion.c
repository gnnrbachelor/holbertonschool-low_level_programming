#include "holberton.h"

/**
 * test_sq - Checks for square root
 *
 * @t: test number
 * @n: number
 *
 * Return: Square root or -1
 */

int test_sq(int t, int n)
{
	if (t * t > n)
		return (-1);
	if (t * t == n)
		return (t);
	t++;
	return (test_sq(t, n));
}

/**
 * _sqrt_recursion - Returns square root
 *
 * @n: number
 *
 * Return: Square root or -1
 */

int _sqrt_recursion(int n)
{
	if (n > 0)
		return (test_sq(0, n));
	return (-1);
}
