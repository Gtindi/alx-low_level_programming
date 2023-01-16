#include "hash_tables.h"

/**
 * set_node - sets the next & prev values of two nodes
 * @source: Sets the next to dest
 * @dest: Sets the prev to source
 *
 * Return: void
 */
void set_node(shash_node_t *source, shash_node_t *dest)
{
	source->snext = dest;
	dest->sprev = source;
}

/**
 * sort_add_node - Add node in sorted order
 * @ht: The hash table
 * @new_node: New node to be added
 *
 * Return: void
 */
void sort_add_node(shash_table_t *ht, shash_node_t *new_node)
{
	int found = 0;
	shash_node_t *node = ht->shead;

	while (node != NULL)
	{
		if (strcmp(node->key, new_node->key) >= 0)
		{
			if (node->sprev)
				set_node(node->sprev, new_node);
			else
				ht->shead = new_node;
			set_node(new_node, node);
			found = 1;
			break;
		}
		node = node->snext;
	}
	if (found == 0)
	{
		set_node(ht->stail, new_node);
		ht->stail = new_node;
	}
}

/**
 * shash_table_create - Creates a sorted hash table
 * @size: The size
 *
 * Return: shash_table_t*
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;
	unsigned long int i;

	table = malloc(sizeof(shash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = size;
	table->shead = NULL;
	table->stail = NULL;
	table->array = malloc(sizeof(shash_node_t *) * size);
	if (table->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		table->array[i] = NULL;
	return (table);
}

/**
 * shash_table_set - Add data to the hash table
 * @ht: The hashtable
 * @key: The key
 * @value: The value
 *
 * Return: int
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new_node, *node = NULL;

	if (ht == NULL || ht->size == 0 || ht->array == NULL)
		return (0);
	if (key == NULL || key[0] == ' ' || strcmp(key, "") == 0)
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
	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	new_node->snext = NULL;
	new_node->sprev = NULL;
	ht->array[index] = new_node;
	node = ht->shead;
	if (node == NULL)
	{
		ht->shead = new_node;
		ht->stail = new_node;
	}
	else
		sort_add_node(ht, new_node);
	return (1);
}

/**
 * shash_table_get - Finds the value of a given key
 * @ht: The hash table
 * @key: The key
 *
 * Return: char* otherwise NULL
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node = NULL;

	if (ht == NULL || key == NULL)
		return (NULL);

	node = ht->shead;
	while (node != NULL)
	{
		if (node && strcmp(node->key, key) == 0)
			return (node->value);
		node = node->snext;
	}
	return (NULL);
}

/**
 * shash_table_print - Prints hash table
 * @ht: The hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	int start = 0;
	shash_node_t *node;

	if (ht == NULL)
		return;
	printf("{");
	node = ht->shead;
	while (node != NULL)
	{
		if (start == 1)
			printf(", ");
		start = 1;
		printf("'%s': '%s'", node->key, node->value);
		node = node->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints hash table in reverse
 * @ht: The hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	int start = 0;
	shash_node_t *node;

	if (ht == NULL)
		return;
	printf("{");
	node = ht->stail;
	while (node != NULL)
	{
		if (start == 1)
			printf(", ");
		start = 1;
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes a hash table
 * @ht: The hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *node, *temp;

	if (ht == NULL)
		return;

	node = ht->shead;
	while (node != NULL)
	{
		temp = node->snext;
		free(node->key);
		free(node->value);
		free(node);
		node = temp;
	}
	free(ht->array);
	free(ht);
}
