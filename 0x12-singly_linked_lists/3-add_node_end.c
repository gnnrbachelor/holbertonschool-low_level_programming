#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - Adds node at end
 *
 * @head: Current head
 * @str: data
 *
 * Return: NULL or address of new head
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int i;
	list_t *n_node;
	list_t *temp;

	for (i = 0; str[i]; i++)
		;

	if (str)
	{
		n_node = malloc(sizeof(list_t));
		if (n_node)
		{
			n_node->str = strdup(str);
			n_node->len = i;
			n_node->next = NULL;
		}
		else
			return (NULL);

		if (!*head)
		{
			*head = n_node;
			return (*head);
		}
		else
		{
			temp = *head;
			while (temp->next)
				temp = temp->next;
			temp->next = n_node;
		}
	}
	return (n_node);
}
