#include "lists.h"

/**
 * get_nodeint_at_index - Returns nth node at index
 *
 * @head: Head
 * @index: Index
 *
 * Return: Node or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j;

	for (j = 0; j < index; j++)
	{
		if (!head)
			return (NULL);

		head = head->next;
	}

	return (head);
}

