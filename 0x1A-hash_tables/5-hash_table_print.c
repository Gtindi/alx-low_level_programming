#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: The hash table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int start = 0;
	hash_node_t *node;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (start == 1)
				printf(", ");
			start = 1;
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
		}
	}
	printf("}\n");
}
