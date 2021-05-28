#include "hash_tables.h"

/**
 * hash_table_delete - Deletes hash table
 *
 * @ht: Hashtable
 *
 * Return: Void
 */


void hash_table_delete(hash_table_t *ht)
{

	hash_node_t *a = NULL;
	hash_node_t *b = NULL;
	unsigned int i = 0;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;

	for (; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			a = ht->array[i];
			while (a != NULL)
			{
				b = a->next;
				free(a->key);
				free(a->value);
				free(a);
				a = b;
			}
		}
	}
	free(ht->array);
	free(ht);
}
