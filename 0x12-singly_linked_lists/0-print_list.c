#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints elements of a list_t list
 *
 * @h: pointer to head
 *
 * Return: Number of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int i;
	const list_t *temp;

	temp = h;

	while (temp)
	{
		if (temp->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%d] %s\n", temp->len, temp->str);
			i++;
		}
		temp = temp->next;
	}
	return (i);
}
