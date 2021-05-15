#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes node at index
 *
 * @head: Head
 * @index: Index
 *
 * Return: 1 or -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = temp->next;
		temp->prev = NULL;
		free(temp);
		return (1);
	}

	while (i < index && temp != NULL)
	{
		if (temp->next == NULL)
			return (-1);
		else
			temp = temp->next;
		i++;
	}

	temp->prev->next = temp->next;
	temp->next->prev = temp->prev;
	free(temp);
	return (1);
}
