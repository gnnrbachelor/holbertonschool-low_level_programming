#include "function_pointers.h"

/**
 * op_add - Adds
 * @a: int
 * @b: int
 *
 * Return: Sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts
 * @a: int
 * @b: int
 *
 * Return: Difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies
 * @a: int
 * @b: int
 *
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides
 * @a: int
 * @b: int
 *
 * Return: Quotient of a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Mod Division
 * @a: int
 * @b: int
 *
 * Return: Mod of a and b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
