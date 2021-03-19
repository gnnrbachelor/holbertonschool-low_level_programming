#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Free a list_t list
 *
 * @head: pointer to head
 *
 * Return: Void
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}

}
