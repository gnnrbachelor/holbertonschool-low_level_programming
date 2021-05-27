#include "hash_tables.h"

/**
 * hash_table_print - Prints hash table
 *
 * @ht: Hash Table
 *
 * Return: void
 *
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp = NULL;
	unsigned int i = 0;
	int comma = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	for (; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			if (comma == 1)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			comma = 1;
			temp = temp->next;
		}
	}
	printf("}\n");
}
