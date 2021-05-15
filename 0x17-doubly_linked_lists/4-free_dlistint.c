#include "lists.h"

/**
 * free_dlistint - Frees doubly linked list
 *
 * @head: head
 *
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = NULL;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

