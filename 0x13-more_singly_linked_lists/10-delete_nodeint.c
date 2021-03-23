#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes node at index
 *
 * @head: Head
 * @index: Index
 *
 * Return: 1 or -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t  *prev, *temp;

	if (head == NULL || *head == NULL)
		return (-1);

	temp = *head;
	prev = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	for (i = 0; i < index - 1; i++)
		prev = prev->next;

	temp = prev;
	prev = prev->next;
	temp->next = prev->next;
	free(prev);
	return (1);

}
