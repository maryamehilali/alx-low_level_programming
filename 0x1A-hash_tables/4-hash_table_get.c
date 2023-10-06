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
	hash_node_t *tmp;

	if (ht == NULL || ht->size == 0 || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
