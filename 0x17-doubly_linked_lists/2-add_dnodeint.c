#include "lists.h"

/**
 * add_dnodeint - Adds node at beginning
 *
 * @head: Head
 * @n: Data
 *
 * Return: Address of new element or NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;

	return (new_node);


}
