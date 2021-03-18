#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - Adds node at beginning
 *
 * @head: Current head
 * @str: data
 *
 * Return: NULL or address of new head
 */

list_t *add_node(list_t **head, const char *str)
{
	int i;
	list_t *n_node;

	for (i = 0; str[i]; i++)
		;

	if (head && str)
	{
		n_node = malloc(sizeof(list_t));
		if (n_node)
		{
			n_node->str = strdup(str);
			n_node->len = i;
			n_node->next = *head;

			*head = n_node;
		}
		else
			return (NULL);
	}
	return (n_node);

}
