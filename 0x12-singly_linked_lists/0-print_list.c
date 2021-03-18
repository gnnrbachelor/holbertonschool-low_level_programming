#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints elements of a list_t list
 *
 * @h: pointer to head
 *
 * Return: Number of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int i;

	for (i = 0; h; i++)
	{

		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;

	}
	return (i);
}
