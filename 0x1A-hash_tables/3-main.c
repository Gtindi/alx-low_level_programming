#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;
	int i;

	ht = hash_table_create(1024);
	hash_table_set(ht, "betty", "cool");
	hash_table_set(ht, "hetairas", "test 1");
	hash_table_set(ht, "mentioner", "test 2");
	hash_table_set(ht, "", "test 3");

	for (i = 0; i < 1024; i++)
	{
		if (ht->array[i] != NULL)
		{
			printf("%s - %s\n", ht->array[i]->key, ht->array[i]->value);
		}
	}
	return (EXIT_SUCCESS);
}
