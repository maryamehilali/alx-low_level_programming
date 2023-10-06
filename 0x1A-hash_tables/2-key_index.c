#include "hash_tables.h"
/**
 * key_index - function that gives the index for a key
 * @size: the size of the array where to store the key
 * @key: the given key
 * Return: index where to store the key in an array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
