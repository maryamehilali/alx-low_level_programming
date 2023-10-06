#include "hash_tables.h"
/**
 * hash_table_delete - function that deletes a hash table
 * @ht: the hash table
 * Return: no Return;
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp, *tmp_2;
	unsigned long int i = 0;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		if (tmp != NULL)
		{
			free(tmp->key);
			free(tmp->value);
			while (tmp->next)
			{
				free(tmp->next->key);
				free(tmp->next->value);
				tmp_2 = tmp->next;
				free(tmp->next);
				tmp->next = NULL;
				tmp = tmp_2;
			}
		free(tmp);
		}
	}
	free(ht->array);
	free(ht);
}
