#include "hash_tables.h"

/**
 * hash_table_set - Adds element to hash table
 *
 * @ht: Hash Table
 * @key: Key
 * @value: Value
 *
 * Return: 1 or 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *n_node = NULL;
	hash_node_t *temp = NULL;
	unsigned int i = 0;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	i = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[i];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (1);
		}
		temp = temp->next;
	}
	n_node = malloc(sizeof(hash_node_t));
	if (n_node == NULL)
		return (0);
	n_node->key = strdup(key);
	n_node->value = strdup(value);
	if (n_node->key == NULL || n_node->value == NULL)
	{
		free(n_node->key);
		free(n_node->value);
		free(n_node);
		return (0);
	}
	n_node->next = NULL;
	if (ht->array[i] == NULL)
		ht->array[i] = n_node;
	else
	{
		n_node->next = ht->array[i];
		ht->array[i] = n_node;
	}
	return (1);
}
