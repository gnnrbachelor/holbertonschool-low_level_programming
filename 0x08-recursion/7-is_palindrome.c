#include "holberton.h"
#include <stdio.h>

/**
 * get_len - get size of string
 *
 * @s: String
 *
 * Return: length
 */

int get_len(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + get_len(s + 1));
}

/**
 * check_pal - Checks for palindrome
 *
 * @s: String
 * @b: Beginning index
 * @e: End index
 *
 * Return: 1 or 0
 */

int check_pal(char *s, int b, int e)
{
	if (b == e)
		return (1);
	if (s[b] != s[e])
		return (0);
	if (b < e + 1)
		return (check_pal(s, b + 1, e - 1));

	return (1);
}



/**
 * is_palindrome - Checks for palindrome
 *
 * @s: String
 *
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{
	int l;

	l = get_len(s);
	if (l == 0)
		return (1);
	return (check_pal(s, 0, l - 1));
}


