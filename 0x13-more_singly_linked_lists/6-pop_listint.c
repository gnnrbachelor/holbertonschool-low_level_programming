#include "lists.h"

/**
 * pop_listint - Deletes head node and returns data
 *
 * @head: head node
 *
 * Return: data or NULL
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (!*head)
		return (0);

	data = (*head)->n;

	temp = *head;
	*head = (*head)->next;

	free(temp);
	return (data);
}
