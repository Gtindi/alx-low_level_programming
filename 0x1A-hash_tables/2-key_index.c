#include "hash_tables.h"

/**
 * key_index - Returns the index of a key
 * @key: The key
 * @size: Size of the hash table
 *
 * Return: unsigned long int
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;
	unsigned long int index;

	hash = hash_djb2(key);
	index = hash % size;
	return (index);
}
