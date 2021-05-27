#include "hash_tables.h"

/**
 * hash_table_get - Retrieves value for key
 *
 * @ht: Hash table
 * @key: Key
 * Return: value or NULL
 *
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp = NULL;
	int i = 0;

	if (ht == NULL || key == NULL)
		return (NULL);

	i = key_index((unsigned char *)key, ht->size);

	if (ht->array[i] == NULL)
		return (NULL);

	temp = ht->array[i];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
