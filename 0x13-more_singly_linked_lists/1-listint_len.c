#include "lists.h"

/**
 * listint_len - Returns number of  elements of a listint_t list
 *
 * @h: Pointer to list
 *
 * Return: Number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		c++;
		h = h->next;
	}
	return (c);
}
