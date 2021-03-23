#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints elements of a listint_t list
 *
 * @h: Pointer to list
 *
 * Return: Number of elements
 */

size_t print_listint(const listint_t *h)
{
	size_t c = 0;

	while (h)
	{
		h = h->next;
		c++;
	}
	return (c);
}
