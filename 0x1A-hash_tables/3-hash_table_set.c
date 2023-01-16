#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: The hash table
 * @key: The key
 * @value: The value
 *
 * Return: int
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *node;

	if (ht == NULL)
		return (0);
	if (ht->size == 0 || ht->array == NULL)
		return (0);
	if (key == NULL || key[0] == ' ' || strcmp(key, "") == 0)
		return (0);
	if (value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			return (1);
		}
		node = node->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
