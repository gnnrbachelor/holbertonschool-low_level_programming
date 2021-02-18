#include "holberton.h"

/**
 *  cap_switch - Decides when to capitalize.
 *
 * @c: Char
 *
 * Return: 1 or 0
 */

int cap_switch(char c)
{
	if (c == '\n' || c == '\t' || c == ' ' || c == ',' || c == ';' ||
	    c == '.' || c == '!' || c == '?' || c == '"' || c == '(' ||
	    c == ')' || c == '{' || c == '}')
		return (1);
	return (0);
}

/**
 *  cap_string - Converts uppercase to lower.
 *
 * @s: Char for conversion
 *
 * Return: String
 */


char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (cap_switch(s[i]) == 1 && s[i + 1] >= 'a' && s[i + 1] <= 'z')
			s[i + 1] = s[i + 1] - 32;
		i++;
	}
	return (s);

}
