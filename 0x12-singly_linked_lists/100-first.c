#include <stdio.h>

void __attribute__((constructor)) callFirst();

/**
 * callFirst - Calls function first
 *
 *
 * Return: Void
 */

void callFirst(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
