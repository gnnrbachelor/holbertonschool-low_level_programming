#include "hash_tables.h"

/**
 * key_index - Gets keys index
 *
 * @key: key
 *@size: size
 * Return: Index of key/value pair
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
