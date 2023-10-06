#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @key: the key of the element
 * @value: value of the element
 * Return: 1 on success 0 on fail.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_table_t tmp;
	hash_node_t *element = NULL;
	unsigned long int index;

	if (ht == NULL || ht->size == 0 || key == NULL || strcmp(key, "") == 0)
		return (0);
	element = (hash_node_t *) malloc(sizeof(hash_node_t));
	if (element == NULL)
		return (0);
	element->key = strdup(key);
	if (value != NULL)
		element->value = value;
	element->next = NULL;
	index = key_index(key, ht->size);
	tmp = ht->array[index];
	if (!tmp)
	{
		ht->array[index] = element;
		return (1);
	}
	else
	{
		ht->arry[index]->next = element;
		return (1);
	}
	return (0);

}
