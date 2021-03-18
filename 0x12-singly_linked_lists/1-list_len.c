#include "lists.h"

/**
 * list_len - Returns list length
 *
 * @h: pointer to head
 *
 * Return: Number of elements
 */

size_t list_len(const list_t *h)
{
	unsigned int i;

	for (i = 0; h; i++)
		h = h->next;

	return (i);
}
