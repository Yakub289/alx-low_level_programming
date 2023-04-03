#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_len - Function that returns element of linked list.
 * @h: A pointer to the head of the listint_t list.
 * Return: The number of elements in the listint_t list.
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
