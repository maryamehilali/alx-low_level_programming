#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: the key of the element
 * @value: value of the element
 * Return: 1 on success 0 on fail.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *element;
	unsigned long int index;

	if (ht == NULL || ht->size == 0 || key == NULL
			|| strcmp(key, "") == 0 || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] != NULL && strcmp(ht->array[index]->key, key) == 0)
	{
		ht->array[index]->value = strdup(value);
		return (1);
	}
	else
	{
		element = (hash_node_t *) malloc(sizeof(hash_node_t));
		if (element == NULL)
			return (0);
		element->key = strdup(key);
		element->value = strdup(value);
		element->next = ht->array[index];
		ht->array[index] = element;
	}
	return (1);
}
