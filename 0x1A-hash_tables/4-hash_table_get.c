#include "hash_tables.h"

/**
 * hash_table_get - Returns a value associated to a key
 * @ht: The hash table
 * @key: The key to retrieve
 *
 * Return: char*
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *node = NULL;

	if (ht == NULL || key == NULL)
		return (NULL);

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (node && strcmp(node->key, key) == 0)
				return (node->value);
			node = node->next;
		}
	}
	return (NULL);
}
