#include "lists.h"

/**
 * sum_list - Returns sum of data in listint_t list
 *
 * @head: Head
 *
 * Return: Sum or NULL
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
