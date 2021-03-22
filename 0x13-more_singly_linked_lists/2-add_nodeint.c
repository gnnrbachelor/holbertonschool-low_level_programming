#include "lists.h"

/**
 * add_nodeint - Adds new node at beginning of listint_t list
 *
 * @head: Head of linked list
 * @n: new element
 *
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_node;

	if (head == NULL)
		return (NULL);

	n_node = malloc(sizeof(listint_t));

	if (!n_node)
		return (NULL);

	n_node->n = n;
	n_node->next = *head;
	*head = n_node;

	return (n_node);

}
