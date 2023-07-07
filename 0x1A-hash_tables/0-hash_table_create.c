#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * *hash_table_create - Write a function that creates a hash table.
 * @size: Is the size of the array.
 * Return: A pointer to the newly created hash table,
 * or NULL on failure.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;

	if (size == 0)
	{
		return (NULL);
	}

	new = malloc(sizeof(hash_table_t));
	if (new != NULL)
	{
		new->array = malloc(sizeof(hash_node_t *) * size);
		if (new->array == NULL)
		{
			return (NULL);
		}
		new->size = size;
	}

	return (new);
}
