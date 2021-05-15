#include "lists.h"

/**
 * sum_dlistint - Sums nodes
 *
 * @head: Head
 *
 * Return: Sum of all nodes or 0
 */

int sum_dlistint(dlistint_t *head)
{

	dlistint_t *temp = head;
	int sum = 0;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);

}
