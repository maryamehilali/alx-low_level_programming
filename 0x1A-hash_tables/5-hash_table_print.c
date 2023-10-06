#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 * Return: no return.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	unsigned long int j = 0;
	hash_node_t *tmp;

	if (ht == NULL || ht->size == 0)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		if (tmp != NULL)
		{
			if (j == 0)
			{
				printf("'%s': '%s'", tmp->key, tmp->value);
				j = 1;
			}
			else
			{
				printf(", '%s': '%s'", tmp->key, tmp->value);
			}
			while (tmp->next)
			{
				printf(", '%s': '%s'", tmp->next->key, tmp->next->value);
				tmp = tmp->next;
			}
		}
	}
	printf("}\n");
}
