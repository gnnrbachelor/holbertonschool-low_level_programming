#include "lists.h"

/**
 * print_dlistint - Prints all elements of linked list
 *
 * @h: Head
 *
 * Return: # of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	int i;

	for (i = 0; temp != NULL; i++)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return (i);
}

