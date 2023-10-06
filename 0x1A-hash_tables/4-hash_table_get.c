#include "hash_tables.h"
/**
 * hash_table_get - finds an element in the hash table
 * @ht: hash table
 * @key: the key of the element
 * Return: value associated with the key.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	if (ht == NULL || ht->size == 0 || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] != NULL && strcmp(ht->array[index]->key, key) == 0)
	{
		return (ht->array[index]->value);
	}
	return (NULL);
}
