#include "lists.h"

/**
 * free_listint - Free listint_t list
 *
 *@head: Head
 *
 * Return: Void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!head)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
