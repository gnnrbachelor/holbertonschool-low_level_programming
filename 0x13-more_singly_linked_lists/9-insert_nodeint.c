#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts node at index
 *
 * @head: Head
 * @idx: Index
 * @n: data
 *
 * Return: New node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *n_node, *temp;

	if (!head)
		return (NULL);

	temp = *head;

	n_node = malloc(sizeof(listint_t));

	if (!n_node)
		return (NULL);

	n_node->n = n;
	n_node->next = NULL;

	if (idx == 0)
	{
		n_node->next = *head;
		*head = n_node;
		return (n_node);
	}

	for (i = 0; i < idx - 1; i++)
	{
		temp = temp->next;

		if (temp == NULL)
			return (NULL);
	}

	n_node->next = temp->next;
	temp->next = n_node;

	return (n_node);
}
