#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - Write a function that prints a hash table.
 * @ht: is the hash table.
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	char comma = 0;
	unsigned long int idx;

	if (ht != NULL)
	{
		printf("{");
		for (idx = 0; idx < ht->size; idx++)
		{
			current = (ht->array)[idx];
			while (current != NULL)
			{
				if (comma == 1)
				{
					printf(", ");
				}
				printf("'%s': '%s'", current->key, current->value);
				current = current->next;
				comma = 1;
			}
		}
		printf("}\n");
	}
}
