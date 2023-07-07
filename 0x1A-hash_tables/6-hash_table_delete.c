#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_delete - Write a function that deletes a hash table.
 * @ht: is the hash table.
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current, *forth;
	unsigned long int idx;

	if (ht == NULL)
		return;

	for (idx = 0; idx < ht->size; idx++)
	{
		current = (ht->array)[idx];
		while (current != NULL)
		{
			forth = current->next;
			free(current->key);
			free(current->value);
			free(current);
			current = forth;
		}
	}
	free(ht->array);
	free(ht);
}
