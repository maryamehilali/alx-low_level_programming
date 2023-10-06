#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash table
 * @size: the size of the hash table
 * @Return: pointer to the created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash = malloc(sizeof(hash_table_t));

	if (hash == NULL)
	{
		dprintf(2, "Error: Cant't malloc");
		return (NULL);
	}
	hash->size = size;
	hash->array = (hash_node_t **) malloc(hash->size * sizeof(hash_node_t *));
	if (hash->array == NULL)
	{
		dprintf(2, "Error: Cant't malloc");
		return (NULL);
	}
	return (hash);
}
