#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * key_index - Write a function that gives you the index of a key.
 * @size: is the size of the array of the hash table.
 * @key: unsigned char pointer to a string.
 * Return: index at which the key/value pair,
 * should be stored in the array of the hash table.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
