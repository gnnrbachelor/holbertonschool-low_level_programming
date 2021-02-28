/*
 * File: _isalpha.c
 * Description: Check if character is alphabetic
 */

#include "holberton.h"

/**
 * _isalpha - Determines if alphabetic
 * @c: character
 * Return: 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}



