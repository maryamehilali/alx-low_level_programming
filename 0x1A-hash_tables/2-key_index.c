#include "hash_tables.h"
/**
 * key_index - function that gives the index for a key
 * @size: the size of the hash table
 * @key: the given key
 * Return: hash index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	(void)size;

	return (hash_djb2(key));
}
