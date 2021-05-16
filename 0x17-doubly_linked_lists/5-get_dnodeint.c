#include "lists.h"

/**
 * get_dnodeint_at_index - Gets nth node
 *
 * @head: Head
 *
 * @index: Index
 *
 * Return: Node or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (NULL);

	for (; temp != NULL; i++)
	{
		if (i == index)
			return (temp);
		temp = temp->next;
	}

	return (NULL);
}
