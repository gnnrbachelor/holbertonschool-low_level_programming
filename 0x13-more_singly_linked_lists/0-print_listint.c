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
	size_t c;

	while (h)
	{
		printf("%d\n", h->n);
		c++;
		h = h->next;
	}
	return (c);
}
