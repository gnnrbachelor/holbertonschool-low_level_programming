#include "lists.h"

/**
 * add_nodeint_end - Adds new node at beginning of listint_t list
 *
 * @head: Head of linked list
 * @n: new element
 *
 * Return: New node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *n_node, *temp;

	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL)
		return (NULL);
	n_node->n = n;
	n_node->next = NULL;

	if (!*head)
	{
		*head = n_node;
		return (n_node);
	}
	temp = *head;
	while (temp->next)
		temp = temp->next;

	temp->next = n_node;

	return (n_node);
}
