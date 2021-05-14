#include "lists.h"

/**
 * dlistint_len - Returns number of elements in list
 *
 * @h: head
 *
 * Return: number of elements
 *
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t * temp = h;
	int i = 0;

	if (temp == NULL)
		return (0);

	while (temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}
